/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 08:25:54 by cesar             #+#    #+#             */
/*   Updated: 2023/11/23 11:59:36 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_pf_putstr(char *s, size_t *p_ret)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	write(1, &s[0], i);
	*p_ret += i;
}
