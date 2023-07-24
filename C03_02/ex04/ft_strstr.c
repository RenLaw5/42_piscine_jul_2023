/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:03:56 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/16 16:42:09 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	char			*temp_str;
	char			*temp_to_find;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			temp_str = str;
			temp_to_find = to_find;
			while (*temp_str == *temp_to_find && *temp_to_find != '\0')
			{
				temp_str++;
				temp_to_find++;
			}
			if (*temp_to_find == '\0')
				return (str);
		}
		str++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str1[] = "abcd";
	char	str2[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
	char	str3[] = "Que tal, bien?";
	char	*res;

	res = strstr(str2, str1);
	printf("strstr: %s\n", res);
	res = strstr(str2, str3);
	printf("strstr: %s\n", res);
	printf("strstr: %s\n", str1);
	printf("strstr: %s\n", str2);
	printf("strstr: %s\n\n\n", str3);

	char	*res2;
	res2 = ft_strstr(str2, str1);
	printf("ft_strstr: %s\n", res2);
	res2 = ft_strstr(str2, str3);
	printf("ft_strstr: %s\n", res2);
	printf("ft_strstr: %s\n", str1);
	printf("ft_strstr: %s\n", str2);
	printf("ft_strstr: %s\n", str3);
}
*/