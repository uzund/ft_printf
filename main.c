/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 03:47:11 by duzun             #+#    #+#             */
/*   Updated: 2023/05/22 17:39:37 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char			c;
	int				nbr;
	int				val1;
	int				val2;
	unsigned int	nbru;
	unsigned int	nbrx;
	unsigned int	nbrx2;
	int				ft;

	c = 'A';
	nbr = -2147483648;
	nbru = 374378742;
	nbrx = 1514131211;
	nbrx2 = 198215894;
	ft_putstr("-- Basit Test --\n");
	ft_putstr("Benim ft_printf çıktısı : \n");
	ft_printf("Karakter Çıktısı: %c\nYüzde işareti yazdırma: %%%%%%\n\
Metin Yazdırma: duzun\nSayısal değer yazdırma: %d\n\
Unsigned int yazdırma: %u\nHeksadesimal küçük harf gösterimi: %x\n\
Heksadesimal büyük harf gösterimi: %X\nPointer Adres gösterimi: %p \n", \
		c, nbr, nbru, nbrx, nbrx2, &ft_bicim);
	ft_putstr("\n---------\n\n");
	ft_putstr("Gerçek printf çıktısı   : \n");
	printf("Karakter Çıktısı: %c\nYüzde işareti yazdırma: %%%%%%\n\
Metin Yazdırma: duzun\nSayısal değer yazdırma: %d\n\
Unsigned int yazdırma: %u\nHeksadesimal küçük harf gösterimi: %x\n\
Heksadesimal büyük harf gösterimi: %X\nPointer Adres gösterimi: %p\n", \
		c, nbr, nbru, nbrx, nbrx2, &ft_bicim);
	ft_putstr("\n-- Karmaşık Test --");
	ft_putstr("\nBenim ft_printf çıktısı : ");
	val1 = ft_printf("\nMerhaba %d %d %s %c %u  %x %X %p %% \n", \
	1434, -42, NULL, 'D', 1234567890, 255, 255, &ft_putchar);
	ft_printf("Yazdırılan bilginin uzunluk değeri = %d\n", val1);
	ft_putstr("\nGerçek printf çıktısı   : ");
	val2 = printf("\nMerhaba %d %d %s %c %u  %x %X %p %% \n", \
	1434, -42, NULL, 'D', 1234567890, 255, 255, &ft_putchar);
	ft_printf(" Yazdırılan bilgini uzunluk değeri = %d\n", val2);
	ft_putstr("\n-- Başka Bir Test --");
	ft = ft_printf("\n%%c = %c\n%%s = %s\n%%d = %d\n%%i = %i\n\
%%u = %u\n%%p = %p\n%%x = %x\n%%X = %X\n%% = %c\n ", 'u', \
"davut", -4242, 9672, 8888, &c, 241364, 241364, '%');
	printf("%d\n", ft);
	ft = printf("\n%%c = %c\n%%s = %s\n%%d = %d\n%%i = %i\n\
%%u = %u\n%%p = %p\n%%x = %x\n%%X = %X\n%% = %c\n ", 'u', \
"davut", -4242, 9672, 8888, &c, 241364, 241364, '%');
	printf("%d\n", ft);
	system ("leaks a.out");
	return (0);
}
