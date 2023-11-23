/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 07:46:43 by cesar             #+#    #+#             */
/*   Updated: 2023/11/23 12:22:36 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <limits.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
void	switch_strings(const char c, va_list args, size_t *p_ret);
void	switch_decimals(const char c, va_list args, size_t *p_ret);
void	switch_hexa(const char c, va_list args, size_t *p_ret);

void	ft_pf_putchar(char c, size_t *p_ret);
void	ft_pf_putstr(char *s, size_t *p_ret);
void	ft_pf_putnbr(int n, size_t *p_ret);
void	ft_pf_putptr(uintptr_t p_ptr, size_t *p_ret);
void	ft_pf_putptrlow(uintptr_t p_ptr, size_t *p_ret);
void	ft_pf_putptrhigh(uintptr_t p_ptr, size_t *p_ret);

uintptr_t	ft_tolower(uintptr_t c);
uintptr_t	ft_toupper(uintptr_t c);

size_t	ft_strlen(const char *str);
size_t	ft_intlen(int n);

#endif