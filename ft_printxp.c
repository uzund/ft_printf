/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printxp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 03:46:57 by duzun             #+#    #+#             */
/*   Updated: 2022/08/30 03:46:59 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

	if (nbrp == '\0')
	{
		write(1, "0", 1);
		return (1);
	}
	val = 0;
	if (nbrp >= 16)
		val += ft_putp(nbrp / 16);
	val += ft_putchar("0123456789abcdef"[nbrp % 16]);
	return (val);
}
