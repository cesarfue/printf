/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:25:14 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/22 17:02:24 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putchar(char c)
{
	if (c != '-')
		c = c + '0';
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_error(int n, char *base)
{
	int	i;
	int	j;
	int	e;

	e = 0;
	j = 1;
	i = 0;
	if (n < 2)
		e++;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] < ' ' || base[i] > '~')
			e++;
		while (base[j])
		{
			if (base[j] == base[i])
				e++;
			j++;
		}
		i++;
		j = i + 1;
	}
	return (e);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	n;

	n = ft_strlen(base);
	if (ft_error(n, base) > 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr < n)
		write(1, &base[nbr % n], 1);
	else
	{
		ft_putnbr_base(nbr / n, base);
		ft_putnbr_base(nbr % n, base);
	}
}
/*
int main(void)
{
	ft_putnbr_base(-1230, "lapin");
}*/
