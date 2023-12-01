/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:13:21 by cesar             #+#    #+#             */
/*   Updated: 2023/11/30 11:55:00 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int main(void)
{
	int ret1 = ft_printf("%%%%%\n");
	printf("ret 1 is %d", ret1);

	printf("\n\n//////////////\n\n");

	int ret2 = printf("%%%%%\n");
	printf("ret 2 is %d", ret2);

	return (0);
}