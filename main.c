/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:13:21 by cesar             #+#    #+#             */
/*   Updated: 2023/11/23 00:20:01 by cesar            ###   ########.fr       */
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
	ft_printf("pmyret is %p\n", pmyret);


	// checking result (int)
	ft_printf("\n\n");
	myret = ft_printf("pmyret is %p\n", pmyret);
	ft_printf("My ret is %d\n", myret);
	ft_printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
	OGret = printf("pmyret is %p\n", pmyret);
	printf("OG ret is %d", OGret);
	printf("\n\n");
	///////////
	
	printf("j'aime les abeilles\n");
	printf("int is %d\n", 10);
	printf("char is %c\n", 'c');

	printf("pmyret is %p\n", pmyret);



	return (0);
}