/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:36:58 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/10 15:40:10 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

int	ft_str_is_numeric(char *str)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if (!(str[i] <= '9' && str [i] >= '0'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char frase[] = "123456789012132";
	int resultado = ft_str_is_numeric(frase);
	printf("%d\n", resultado);

	char frase2[] = "325886154816h";
	resultado = ft_str_is_numeric(frase2);
	printf("%d\n", resultado);

	char fraseVacia[] = "";
	resultado = ft_str_is_numeric(fraseVacia);
	printf("%d\n", resultado);
}
*/