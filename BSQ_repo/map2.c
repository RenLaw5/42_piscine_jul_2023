/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:37:56 by irubio-m          #+#    #+#             */
/*   Updated: 2023/07/26 17:06:54 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	rowsnumber(char *arguments)
{
	int	res;
	int	i;
	int	tam;

	i = 0;
	res = 0;
	tam = ft_strlen(arguments);
	while (i < tam - 3)
	{
		res = (res * 10) + (arguments[i] - '0');
		i++;
	}
	return (res);
}
