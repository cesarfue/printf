/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:13:21 by cesar             #+#    #+#             */
/*   Updated: 2023/11/23 17:08:23 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int main(void)
{
    ft_printf("%5%\n");
	ft_printf("%-5%\n");
	ft_printf("%-05%\n");
	// ft_printf("%-p", &ncm_p);
	ft_printf("%-x\n", 42);
	ft_printf("%.c\n", 'a');
	ft_printf("%-c\n", 'a');
	ft_printf("%-s\n", "hello");
	ft_printf("%-s\n", NULL);
	ft_printf("%23s\n", NULL);
	ft_printf("%.s\n", NULL);
	ft_printf("%p\n", NULL);
	ft_printf("%s\n", NULL);
	ft_printf("%32s\n", "abc");
	ft_printf("%16s\n", "nark nark");
	ft_printf("%5s\n", "goes over");
	ft_printf("%-32s\n", "abc");
	ft_printf("%-16s\n", "nark nark");
	ft_printf("%-5s\n", "goes over");
	ft_printf("%.7s\n", "hello");

	return (0);
}