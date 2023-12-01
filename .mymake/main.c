/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:13:21 by cesar             #+#    #+#             */
/*   Updated: 2023/12/01 17:59:55 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int main(void)
{
    int ret1 = ft_printf("%adebkdasjdf");
	printf("\n");
    int ret2 = printf("%adebkdasjdf");
	printf("\n");

	printf("\nmy is %d, OG is %d", ret1, ret2);
	
	// ft_printf("bouh");
	// printf("\n");
    // printf("bouh");
	// printf("\n\n");

	// ft_printf("%s");
    // printf("%s");
	// printf("\n\n");
	
	return (0);
}