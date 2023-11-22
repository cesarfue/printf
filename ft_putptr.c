/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 07:58:52 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/22 14:47:20 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122)
		|| (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

void	ft_putptr(uintptr_t p_ptr)
{
	if (p_ptr >= 16)
	{
		ft_putptr(p_ptr / 16);
		ft_putptr(p_ptr % 16);
	}
	else if (ft_isalpha(p_ptr))
		ft_putchar(p_ptr);
	else if (ft_isdigit(p_ptr))
		ft_putchar(p_ptr + '0');
}

#include <stdlib.h>
int main(void)
{
	int	i;
	int	*pi;

	pi = &i;
	ft_putptr((uintptr_t)pi);
	printf("\n%p\n", pi);
	return (0);
}
