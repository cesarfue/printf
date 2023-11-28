/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 07:46:43 by cesar             #+#    #+#             */
/*   Updated: 2023/11/28 15:51:13 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
void	switch_strings(const char c, va_list args, size_t *p_ret);
void	switch_decimals(const char c, va_list args, size_t *p_ret);
void	switch_hexa(const char c, va_list args, size_t *p_ret);
void	switch_else(const char c, size_t *p_ret);

void	ft_pf_putchar(char c, size_t *p_ret);
void	ft_pf_putstr(char *s, size_t *p_ret);
void	ft_pf_putnbr(long n, size_t *p_ret);
void	ft_pf_putptr(uintptr_t p_ptr, size_t *p_ret);
void	ft_pf_putptrlow(uintptr_t p_ptr, size_t *p_ret);
void	ft_pf_putptrhigh(uintptr_t p_ptr, size_t *p_ret);

size_t	ft_strlen(const char *str);
size_t	ft_intlen(int n);
int		ft_pf_strchr(const char *s, char c);

#endif