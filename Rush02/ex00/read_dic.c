/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:28:24 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/23 19:18:20 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int				ft_length_num(int num);
int				ft_power(int nb, int power);
int				ft_strlen(char *str);
int				count_char(int file);
void			print(char *str, int index, int last);
void			translate(char *str, unsigned int *num, int size);
char			*store_content(int file);
int				ft_strstr(char *str, char *to_find);
char			*num_char(int num);
unsigned int	ft_atoi(char *text);
void			fill_array(unsigned int *arr, unsigned int n, int num_dig);
unsigned int	*create_array(char *num);
int				check_number(char *text);

int	ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (i + j + 2);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

char	*store_content(int file)
{
	int		bytesreader;
	char	buffer[1];
	char	*str;
	int		index;

	str = (char *)malloc(count_char(file));
	close (file);
	file = open("numbers.dict", O_RDONLY);
	bytesreader = read(file, buffer, 1);
	index = 0;
	while (bytesreader > 0)
	{
		if (buffer[0] != ' ')
		{
			str[index] = buffer[0];
			index++;
		}
		bytesreader = read(file, buffer, 1);
	}
	return (str);
}

void	translate(char *str, unsigned int *num, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (num[i] >= 100)
		{
			print(str, ft_strstr(str, num_char(num[i] / ft_power(10, 2))), 0);
			print(str, ft_strstr(str, num_char(ft_power(10, 2))), 0);
		}
		else if (num[i] != 0)
		{
			if (i == size - 1)
				print(str, ft_strstr(str, num_char(num[i])), 1);
			else
				print(str, ft_strstr(str, num_char(num[i])), 0);
		}
		else if (num[0] == 0 && size == 1)
			print(str, 2, 1);
		if (size > 3 && (size - i - 1) % 3 == 0 && i != size - 1)
			print(str, ft_strstr(str, num_char(ft_power(10, size - i - 1))), 0);
		i++;
	}
	free(num);
	free(str);
}
