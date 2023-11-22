/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:13:21 by cesar             #+#    #+#             */
/*   Updated: 2023/11/22 14:24:18 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	main(void)
{
	int myret;
	int OGret;
	int *pmyret;

	pmyret = &myret;
	ft_printf("j'aime les abeilles\n");
	ft_printf("int is %d\n", 10);
	ft_printf("char is %c\n", 'c');

	// checking result (int)
	ft_printf("\n\n");
	myret = ft_printf("(string is %s)\n", "abeilles");
	ft_printf("My ret is %d\n", myret);
	ft_printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
	OGret = printf("(string is %s)\n", "abeilles");
	printf("OG ret is %d", OGret);
	printf("\n\n");
	///////////
	
	printf("j'aime les abeilles\n");
	printf("int is %d\n", 10);
	printf("char is %c\n", 'c');

	printf("pmyret is %p\n", pmyret);



	return (0);
}