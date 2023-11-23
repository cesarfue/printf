/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:25:14 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/23 00:09:03 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

size_t	ft_pf_putptr(uintptr_t p_ptr)
{
	const char 	*base;
	size_t		ret;

	ret = 0;
	base = "0123456789abcdef";
	if (p_ptr < 16)
	{
		write(1, &base[p_ptr % 16], 1);
		ret++;
	}
	else
	{
		ft_pf_putptr(p_ptr / 16);
		ft_pf_putptr(p_ptr % 16);
	}
	return (ret);
}
