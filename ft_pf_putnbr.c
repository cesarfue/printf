/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:27:55 by cesar             #+#    #+#             */
/*   Updated: 2023/11/23 00:08:30 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

size_t	ft_pf_putnbr(int n)
{
	size_t	ret;

	ret = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		ret += 11;
	}
	else if (n < 0)
	{
		ft_pf_putchar('-');
		ret++;
		ft_pf_putnbr(n * -1);
	}
	else if (n >= 10)
	{
		ft_pf_putnbr(n / 10);
		ft_pf_putnbr(n % 10);
	}
	else if (n < 10)
	{
		ft_pf_putchar(n + '0');
		ret++;
	}
	return (ret);
}
