/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:18:51 by irubio-m          #+#    #+#             */
/*   Updated: 2023/07/23 19:28:02 by lafuente         ###   ########.fr       */
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

char	*num_char(int num)
{
	int		length;
	int		i;
	char	*array_char;

	length = ft_length_num(num);
	i = length - 1;
	array_char = (char *)malloc((length + 1) * sizeof(char));
	array_char[length] = '\0';
	while (i >= 0)
	{
		array_char[i] = '0' + num % 10;
		num /= 10;
		i--;
	}
	return (array_char);
}

unsigned int	ft_atoi(char *text)
{
	unsigned int	num;
	int				i;

	num = 0;
	i = 0;
	while ((text[i] <= 13 && text[i] >= 9) || text[i] == ' ')
		i++;
	while (text[i] != '\0' && num <= 4294967295 / 10)
	{
		if (text[i] >= '0' && text[i] <= '9')
			num = num * 10 + (text[i] - '0');
		else
			break ;
		i++;
	}
	return (num);
}

void	fill_array(unsigned int *arr, unsigned int n, int num_dig)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = 0;
	aux = n;
	while (j < num_dig)
	{
		if (i % 3 == 0)
			i = 0;
		arr[num_dig - j - 1] = (aux % 10 * ft_power(10, i++));
		aux /= 10;
		j++;
	}
	i = 0;
	while (i < num_dig)
	{
		if (arr[i] < 20 && arr[i] > 9)
		{
			arr[i] = arr[i] + arr[i + 1];
			arr[i + 1] = 0;
		}
		i++;
	}
}

unsigned int	*create_array(char *num)
{
	int				digits;
	unsigned int	*num_div;
	unsigned int	num_int;

	digits = ft_strlen(num);
	num_div = (unsigned int *) malloc(digits * sizeof(unsigned int));
	num_int = ft_atoi(num);
	fill_array(num_div, num_int, digits);
	return (num_div);
}

int	check_number(char *text)
{
	int	i;

	i = 0;
	while (text[i] != '\0')
	{
		if (text[i] > '9' || text[i] < '0')
			return (1);
		i++;
	}
	return (0);
}
