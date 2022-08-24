/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 06:49:19 by duzun             #+#    #+#             */
/*   Updated: 2022/08/25 00:53:43 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_h"

int	ft_bicim(char c, va_list arg)
{
	
}

int	ft_printf(const char *str, ...)
{
	int		val;
	int		i;
	va_list	arg;

	va_start(arg, str);
	val = 0;
	i = 0;
	while (*str)
	{
		if (*str == '%')
		{
			val += ft_bicim(str++, arg);
			i++;
		}
		else
			val += ft_putchar(str++);
			
	}
}