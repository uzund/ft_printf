/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:32:15 by duzun             #+#    #+#             */
/*   Updated: 2022/08/29 02:59:17 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_bicim(char c, va_list arg);
int		ft_putchar(char c);
int		ft_putstr(char *str);
size_t	ft_nbrlen(int nbr);
int		ft_putnbr(int nbr);
int		ft_putnbru(unsigned int nbru);
int		ft_putnbrx(unsigned int n, char c);
int		ft_putp(unsigned long int nbrp);

#endif