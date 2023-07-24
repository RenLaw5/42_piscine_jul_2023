/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:32:26 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/09 19:58:22 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		write (1, &str[position], 1);
		position ++;
	}
}
/*
int	main(void)
{
	char *str = "Hola que tal";
	ft_putstr(str);
}
*/