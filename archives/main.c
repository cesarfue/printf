/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:13:21 by cesar             #+#    #+#             */
/*   Updated: 2023/11/23 13:58:37 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	main(void)
{
	int myret;
	int OGret;
	int *pmyret;
	int	myint;
	const char *mystr;

	pmyret = &myret;
	myint = 3495743;
	mystr = "j'aime les abeilles";
/* 	ft_printf("j'aime les abeilles\n");
	ft_printf("int is %d\n", 10);
	ft_printf("char is %c\n", 'c');
	ft_printf("p is %p\n", pmyret);
	ft_printf("x is %x\n", tohex);
	ft_printf("X is %X\n", tohex);

 */

	// checking result (int)
	ft_printf("\n\n");

	myret = ft_printf("count for -> %u\n", myint);
	ft_printf("My ret is %d\n", myret);
	ft_printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
	OGret = printf("count for -> %u\n", myint);
	printf("OG ret is %d", OGret);

	printf("\n\n");
	///////////

/* 	
	printf("j'aime les abeilles\n");
	printf("int is %d\n", 10);
	printf("char is %c\n", 'c');

	printf("p is %p\n", pmyret);
	printf("x is %x\n", tohex);
	printf("X is %X\n", tohex);

 */

	return (0);
}