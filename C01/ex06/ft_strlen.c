/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:59:20 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/09 20:13:31 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		pos++;
	}
	return (pos);
}
/*
int	main(void)
{
	char *str = "Hola";
	int len = ft_strlen(str);
	printf("%d", len);
	return 0;
}
*/