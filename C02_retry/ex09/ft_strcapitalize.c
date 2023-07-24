/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:03:31 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/12 15:50:50 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

char	*ft_strlowcase(char *str)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if (str[i] <= 'Z' && str [i] >= 'A')
			str[i] = str[i] + ('a' - 'A');
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	len;
	unsigned int	i;

	str = ft_strlowcase(str);
	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if ((str[i] <= 'z' && str [i] >= 'a'))
		{
			if (i == 0 || (str[i - 1] == ' '
					|| str[i - 1] == '+' || str[i - 1] == '-'))
				str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *cap = ft_strcapitalize(str);
	printf("%s\n", cap);

	char str1[] = "SALUT, COMMENT TU VAS ? 42MOTS QUARANTE-DEUX; CINQUANTE+ET+UN";
	char *cap1 = ft_strcapitalize(str1);
	printf("%s\n", cap1);
}
*/