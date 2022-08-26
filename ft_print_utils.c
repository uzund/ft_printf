/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:02:08 by duzun             #+#    #+#             */
/*   Updated: 2022/08/26 16:13:20 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_yazchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_yazstr(char *str)
{
	int	i;

	i = 0;
	if (*str)
		return (write(1, "(null)", 6));
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}
