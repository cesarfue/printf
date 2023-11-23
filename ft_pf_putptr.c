/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:25:14 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/23 14:13:31 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_pf_putptr(uintptr_t p_ptr, size_t *p_ret)
{
	const char 	*base;

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
