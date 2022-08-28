/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:02:08 by duzun             #+#    #+#             */
/*   Updated: 2022/08/29 01:09:34 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!*str)
		return (write(1, "(null)", 6));
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

int	ft_putnbr(int nbr)
{
	int	val;

	val = 0;
	if (nbr == -2147483648)
	{
		val = ft_putstr("-2147483648");
		return (11);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr > 9)
		val += ft_putnbr(nbr / 10);
		val += ft_putchar("0123456789"[nbr % 10]);
	return (val);
}

int	ft_putnbru(unsigned int nbru)
{
	int	val;

	val = 0;
	if (nbru == 0)
	{
		ft_putstr("0");
		return (1);
	}
	if (nbru >= 10)
		val += ft_putnbru(nbru / 10);
	val += ft_putchar("0123456789"[nbru % 10]);
	return (val);
}

int	ft_putnbrx(unsigned int nbrx, char c)
{
	int	val;

	val = 0;
	if (nbrx == 0)
	{
		ft_putstr("0");
		return (1);
	}
	if (nbrx >= 16)
		val += ft_putnbrx(nbrx / 16, c);
	if (c == 'x')
		val += ft_putchar("0123456789abcdef"[nbrx % 16]);
	else
		val += ft_putchar("0123456789ABCDEF"[nbrx % 16]);
	return (val);
}

int	ft_putp(unsigned long int nbrp)
{
	int	val;

	val = 0;
	if (nbrp >= 16)
		val += ft_putp(nbrp / 16);
	val += ft_putchar("0123456789abcdef"[nbrp % 16]);
	return (val);
}
