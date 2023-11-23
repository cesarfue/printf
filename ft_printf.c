/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:21:56 by cesar             #+#    #+#             */
/*   Updated: 2023/11/23 12:18:59 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{	
	size_t		i;
	size_t		ret;
	size_t		*p_ret;
	va_list		args;

	va_start(args, format);
	p_ret = &ret;
	ret = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_pf_putchar(format[i], p_ret);
			ret++;
		}
		else if (format[i] == '%')
		{
			i++;
			switch_strings(format[i], args, p_ret);
		}
		i++;
	}
	va_end(args);
	return (ret);
}

void	switch_strings(const char c, va_list args, size_t *p_ret)
{	
	const char	*p_str;
	char		p_char;

	if (c == 'c')
	{
		p_char = (char) va_arg(args, int);
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

void	switch_decimals(const char c, va_list args, size_t *p_ret)
{
	int			p_int;
	
	if (c == 'd')
	{
		p_int = va_arg(args, int);
		ft_pf_putnbr(p_int, p_ret);
	}
	else
		switch_hexa(c, args, p_ret);
	return ;
}

void	switch_hexa(const char c, va_list args, size_t *p_ret)
{
	uintptr_t	p_ptr;

	if (c == 'p')
	{
		p_ptr = (uintptr_t)va_arg(args, void *);
		ft_pf_putstr("0x", p_ret);
		ft_pf_putptr(p_ptr, p_ret);
	}
	else if (c == 'x')
	{
		p_ptr = (uintptr_t) va_args(args, void *);
		ft_pf_putstr("0x", p_ret);
		ft_pf_putptrlow(p_ptr, p_ret); 
	}
	else if (c == 'X')
	{
		p_ptr = (uintptr_t) va_args(args, void *);
		ft_pf_putstr("0x", p_ret);
		ft_pf_putptrhigh(p_ptr, p_ret); 
	}
	return ;
}