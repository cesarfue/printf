/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:21:56 by cesar             #+#    #+#             */
/*   Updated: 2023/12/01 12:03:53 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	size_t		i;
	size_t		ret;
	size_t		*p_ret;
	va_list		args;

	if (!format)
		return (-1);
	va_start(args, format);
	ret = 0;
	p_ret = &ret;
	i = 0;
	while (format[i] && ret >= 0)
	{
		if (format[i] == '%')
		{
			ft_pf_putchar(format[i + 1], p_ret);
			i++;
		}
		else
			switch_strings(format[i], args, p_ret);
		i++;
	}
	va_end(args);
	return (ret);
}
