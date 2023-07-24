/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:52:27 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/12 11:58:14 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_print_hex(int n)
{
	int	div;
	int	mod;

	div = n / 16;
	mod = n % 16;
	if (div > 9)
		ft_putchar(div - 10 + 'a');
	else
		ft_putchar(div + '0');
	if (mod > 9)
		ft_putchar(mod - 10 + 'a');
	else
		ft_putchar(mod + '0');
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			ft_putchar('\\');
			ft_print_hex(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
/*
int	main(void)
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}
*/