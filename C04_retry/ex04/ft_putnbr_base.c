/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:47:17 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/19 15:19:06 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	b;
	int	i;
	int	j;

	b = ft_strlen(base);
	if (b == 0 || b == 1)
		return (1);
	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[j] != '\0')
		{
			if (j != i && base[i] == base[j])
				return (1);
			j++;
		}
		i++;
		j = 0;
	}
	return (b);
}

void	print_comb(int nbr, int b, char *base)
{
	char	to_print;

	if (nbr < b)
	{
		to_print = base[nbr];
	}
	else
	{
		print_comb(nbr / b, b, base);
		to_print = base[nbr % b];
	}
	write(1, &to_print, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	b;

	i = 0;
	b = check_base(base);
	if (b == 1)
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		print_comb(-(nbr / b), b, base);
		print_comb(-(nbr % b), b, base);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		print_comb(-nbr, b, base);
	}
	else
		print_comb(nbr, b, base);
}
/*
int	main(void)
{
	int	nbr = 12345;
	char *base = "poniguayle";
	ft_putnbr_base(nbr, base);
}
*/