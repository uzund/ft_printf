/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printxp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 03:46:57 by duzun             #+#    #+#             */
/*   Updated: 2023/05/22 17:35:00 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrx(unsigned int nbrx, char c)
{
	int	val;

	val = 0;
	if (nbrx >= 16)
		val += ft_putnbrx(nbrx / 16, c);
	if (c == 'x')
		write(1, &"0123456789abcdef"[nbrx % 16], 1);
	if (c == 'X')
		write(1, &"0123456789ABCDEF"[nbrx % 16], 1);
	return (val + 1);
}

int	ft_putnbrp(unsigned long int nbrp)
{
	int	val;

	val = 0;
	if (nbrp >= 16)
		val += ft_putnbrp(nbrp / 16);
	write(1, &"0123456789abcdef"[nbrp % 16], 1);
	return (val + 1);
}
