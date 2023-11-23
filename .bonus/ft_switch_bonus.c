/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:46:37 by cesar             #+#    #+#             */
/*   Updated: 2023/11/23 19:10:06 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	switch_plus(const char c, size_t *p_ret)
{
	size_t	left_justify;
	char	*buf;
	size_t	i;

	left_justify = 0;
	i = 0;
	if (c == '-')
		left_justify = 1;
	if (c >= '1' && c <= '9')
	{
		while (c >= '1' && c <= '9')
			i++;
		ft_substr()
	}
	
}