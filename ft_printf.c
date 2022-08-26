/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 06:49:19 by duzun             #+#    #+#             */
/*   Updated: 2022/08/26 17:43:29 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_bicim(char c, va_list arg)
{
	int	val;

	val = 0;
	if (c == '%')
		val += write(1, "%", 1);
	else if (c == 'c')
		val += ft_yazchar(va_arg(arg, int));
	else if (c == 's')
		val += ft_yazstr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		val += ft_yaznbr(va_arg(arg, int));
	return (val);
}

int	ft_printf(const char *str, ...)
{
	int		val;
	int		i;
	va_list	arg;

	va_start(arg, str);
	val = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			val += ft_bicim(str[++i], arg);
			i++;
		}
		else
			val += ft_yazchar(str[i++]);
	}
	va_end(arg);
	return (val);
}

int	main(void)
{
	char	c;
	int		nbr;

	c = 'A';
	nbr = -2147483648;
	ft_printf("%c %% \n Davut UZUN \n %d", c, nbr);
	return (0);
}
