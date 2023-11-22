/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:21:56 by cesar             #+#    #+#             */
/*   Updated: 2023/11/22 14:10:01 by cesar            ###   ########.fr       */
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
			ft_putchar(format[i]);
			ret++;
		}
		else if (format[i] == '%')
		{
			i++;
			flag_id(format[i], args, p_ret);
		}
		i++;
	}
	va_end(args);
	return (ret);
}

void	flag_id(const char c, va_list args, size_t *p_ret)
{	
	const char	*p_str;
	char		p_char;
	int			p_int;

	if (c == 'c')
	{
		p_char = (char) va_arg(args, int);
		(*p_ret)++;
		ft_putchar(p_char);
	}
	else if (c == 's')
	{
		p_str = (const char *)va_arg(args, char *);
		*p_ret += ft_strlen(p_str);
		ft_putstr((char *)p_str);
	}
	else if (c == 'd')
	{
		p_int = va_arg(args, int);
		*p_ret += ft_intlen(p_int);
		ft_putnbr(p_int);
	}
	return ;
}

