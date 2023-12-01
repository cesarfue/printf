/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:13:21 by cesar             #+#    #+#             */
/*   Updated: 2023/12/01 12:38:35 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int main(void)
{
    printf("\n-> my is %d\n", ft_printf("%%%%%%%"));
    printf("\n-> OG is %d\n", printf("%%%%%%%"));
	printf("\n\n");
	
	printf("\n-> my is %d\n", ft_printf("%%%%%%"));
    printf("\n-> OG is %d\n", printf("%%%%%%"));
	printf("\n\n");

	printf("\n-> my is %d\n", ft_printf("%%%%%%%"));
    printf("\n-> OG is %d\n", printf("%%%%%%%"));
	printf("\n\n");
	
	return (0);
}