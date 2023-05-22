/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 03:46:17 by duzun             #+#    #+#             */
/*   Updated: 2023/05/22 17:34:54 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	len;

	len = -1;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[++len])
		write(1, &str[len], 1);
	return (len);
}

int	ft_putnbr(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (write(1, "0", 1));
	if (nbr == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nbr < 0)
	{
		len += write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= 10)
		len += ft_putnbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
	return (len + 1);
}

int	ft_putnbru(unsigned int nbru)
{
	int	val;

	val = 0;
	if (nbru >= 10)
		val += ft_putnbru(nbru / 10);
	write(1, &"0123456789"[nbru % 10], 1);
	return (val + 1);
}
