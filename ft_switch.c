/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:42:34 by cesar             #+#    #+#             */
/*   Updated: 2023/12/01 17:52:59 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	switch_strings(const char c, va_list args, ssize_t *p_ret)
{
	const char	*p_str;
	char		p_char;

	if (c == 'c')
	{
		p_char = va_arg(args, int);
		ft_pf_putchar(p_char, p_ret);
	}
	else if (c == 's')
	{
		p_str = (const char *)va_arg(args, char *);
		ft_pf_putstr((char *)p_str, p_ret);
	}
	else
		switch_decimals(c, args, p_ret);
	return ;
}

void	switch_decimals(const char c, va_list args, ssize_t *p_ret)
{
	int				p_int;
	unsigned int	p_uint;

	if (c == 'd' || c == 'i')
	{
		p_int = va_arg(args, int);
		ft_pf_putnbr(p_int, p_ret);
	}
	else if (c == 'u')
	{
		p_uint = (unsigned int)va_arg(args, int);
		ft_pf_putnbr(p_uint, p_ret);
	}
	else
		switch_hexa(c, args, p_ret);
	return ;
}

void	switch_hexa(const char c, va_list args, ssize_t *p_ret)
{
	uintptr_t	p_ptr;

	if (c == 'p')
	{
		p_ptr = (uintptr_t)va_arg(args, void *);
		if (!p_ptr)
		{
			ft_pf_putstr("(nil)", p_ret);
			return ;
		}
		ft_pf_putstr("0x", p_ret);
		ft_pf_putptr(p_ptr, p_ret);
	}
	else if (c == 'x')
	{
		p_ptr = (uintptr_t) va_arg(args, void *);
		ft_pf_putptrlow(p_ptr, p_ret);
	}
	else if (c == 'X')
	{
		ft_pf_putptrhigh((p_ptr = (uintptr_t) va_arg(args, void *)), p_ret);
	}
	else
		switch_else(c, p_ret);
	return ;
}

void	switch_else(const char c, ssize_t *p_ret)
{
	if (c == '%')
		ft_pf_putchar(c, p_ret);
	return ;
}
