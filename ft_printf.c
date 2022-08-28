/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 06:49:19 by duzun             #+#    #+#             */
/*   Updated: 2022/08/29 00:54:55 by duzun            ###   ########.fr       */
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
		val += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		val += ft_putstr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		val += ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		val += ft_putnbru(va_arg(arg, unsigned int));
	else if (c == 'x' || c == 'X')
		val += ft_putnbrx(va_arg(arg, int), c);
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
			val += ft_putchar(str[i++]);
	}
	va_end(arg);
	return (val);
}

int	main(void)
{
	char			c;
	int				nbr;
	unsigned int	nbru;
	unsigned int	nbrx;
	unsigned int	nbrx2;

	c = 'A';
	nbr = -2147483648;
	nbru = 374378742;
	nbrx = 1514131211;
	nbrx2 = 111215894;
	ft_printf("Karakter Çıktısı: %c\nYüzde işareti yazdırma: %%\n \
		Metin Yazdırma: Davut UZUN\nSayısal değer yazdırma: %d\n \
		Unsigned int yazdırma: %u\nHeksadesimal küçük harf gösterimi: %x\n \
		Heksadesimal büyük harf gösterimi: %X", c, nbr, nbru, nbrx, nbrx2);
	return (0);
}
