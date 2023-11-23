/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putptrlow.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:07:39 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/23 14:13:59 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_pf_putptrlow(uintptr_t p_ptr, size_t *p_ret)
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
		ft_pf_putptrlow(p_ptr / 16, p_ret);
		ft_pf_putptrlow(p_ptr % 16, p_ret);
	}
}