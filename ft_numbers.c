/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:27:55 by cesar             #+#    #+#             */
/*   Updated: 2023/11/23 18:40:26 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_pf_putnbr(int n, size_t *p_ret)
{
	if (n == -2147483648)
	{
		if (write(1, "-2147483648", 11))
			*p_ret += 11;
	}
	else if (n < 0)
	{
		ft_pf_putchar('-', p_ret);
		ft_pf_putnbr(n * -1, p_ret);
	}
	else if (n >= 10)
	{
		ft_pf_putnbr(n / 10, p_ret);
		ft_pf_putnbr(n % 10, p_ret);
	}
	else if (n < 10)
	{
		ft_pf_putchar(n + '0', p_ret);
	}
}

void	ft_pf_putptr(uintptr_t p_ptr, size_t *p_ret)
{
	const char	*base;

	base = "0123456789abcdef";
	if (p_ptr < 16)
	{
		if (write(1, &base[p_ptr % 16], 1))
			(*p_ret)++;
	}
	else
	{
		ft_pf_putptr(p_ptr / 16, p_ret);
		ft_pf_putptr(p_ptr % 16, p_ret);
	}
}

void	ft_pf_putptrhigh(uintptr_t p_ptr, size_t *p_ret)
{
	const char	*base;

	base = "0123456789ABCDEF";
	if (p_ptr < 16)
	{
		if (write(1, &base[p_ptr % 16], 1))
			(*p_ret)++;
	}
	else
	{
		ft_pf_putptrhigh(p_ptr / 16, p_ret);
		ft_pf_putptrhigh(p_ptr % 16, p_ret);
	}
}

void	ft_pf_putptrlow(uintptr_t p_ptr, size_t *p_ret)
{
	const char	*base;

	base = "0123456789abcdef";
	if (p_ptr < 16)
	{
		if (write(1, &base[p_ptr % 16], 1))
			(*p_ret)++;
	}
	else
	{
		ft_pf_putptrlow(p_ptr / 16, p_ret);
		ft_pf_putptrlow(p_ptr % 16, p_ret);
	}
}

size_t	ft_intlen(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		i = 1;
	else if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
