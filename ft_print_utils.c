/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:02:08 by duzun             #+#    #+#             */
/*   Updated: 2022/08/26 17:51:03 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_yazchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_yazstr(char *str)
{
	int	i;

	i = 0;
	if (!*str)
		return (write(1, "(null)", 6));
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

int	ft_yaznbr(int nbr)
{
	int	val;

	val = 0;
	if (nbr == -2147483648)
	{
		val = ft_yazstr("-2147483648");
		return (val);
	}
	else if (nbr < 0)
	{
		ft_yazchar('-');
		nbr = nbr * -1;
	}
	if (nbr > 9)
		val += ft_yaznbr(nbr / 10);
		val += ft_yazchar("0123456789"[nbr % 10]);
	return (val);
}
