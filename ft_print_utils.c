/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:02:08 by duzun             #+#    #+#             */
/*   Updated: 2022/08/29 03:11:08 by duzun            ###   ########.fr       */
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
	char	*ptr;

	if (str)
	{
		ptr = (char *) str;
		while (*ptr)
			ptr += 1;
		write(1, str, (ptr - str));
		return (ptr - str);
	}
	else
		write(1, "(null)", 6);
	return (6);
}

size_t	ft_nbrlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

int	ft_putnbr(int nbr)
{
	int		len;
	char	*str;
	long	num;

	len = ft_nbrlen(nbr);
	num = nbr;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	if (num < 0)
	{
		str[0] = '-';
		num = -1 * num;
	}
	if (num == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (num)
	{
		str[len--] = num % 10 + '0';
		num = num / 10;
	}
	ft_putstr(str);
	free(str);
	return (ft_nbrlen(nbr));
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
