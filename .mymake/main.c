/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:13:21 by cesar             #+#    #+#             */
/*   Updated: 2023/11/28 17:43:28 by cesar            ###   ########.fr       */
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

	printf("\n\n//////////////\n\n");

	printf("%5%\n");
	printf("%-5%\n");
	printf("%-05%\n");
	// printf("%-p", &ncm_p);
	printf("%-x\n", 42);
	printf("%.c\n", 'a');
	printf("%-c\n", 'a');
	printf("%-s\n", "hello");
	printf("%-s\n", NULL);
	printf("%23s\n", NULL);
	printf("%.s\n", NULL);
	printf("%p\n", NULL);
	printf("%s\n", NULL);
	printf("%32s\n", "abc");
	printf("%16s\n", "nark nark");
	printf("%5s\n", "goes over");
	printf("%-32s\n", "abc");
	printf("%-16s\n", "nark nark");
	printf("%-5s\n", "goes over");
	printf("%.7s\n", "hello");
	return (0);
}