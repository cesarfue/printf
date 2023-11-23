/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:27:55 by cesar             #+#    #+#             */
/*   Updated: 2023/11/23 14:12:55 by cefuente         ###   ########.fr       */
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
