/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:22:36 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/23 19:23:24 by lafuente         ###   ########.fr       */
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

int	ft_length_num(int num)
{
	int		length;

	length = 1;
	while (num / 10)
	{
		num /= 10;
		length++;
	}
	return (length);
}

int	ft_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	return (nb * ft_power(nb, power - 1));
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	count_char(int file)
{
	int		totalbytes;
	int		bytesreader;
	char	buffer[1];

	totalbytes = 0;
	bytesreader = read(file, buffer, 1);
	while ((bytesreader > 0))
	{
		bytesreader = read(file, buffer, 1);
		totalbytes += bytesreader;
	}
	return (totalbytes);
}

void	print(char *str, int index, int last)
{
	while (str[index] != '\n')
	{
		write(1, &str[index], 1);
		index++;
	}
	if (last == 0)
		write(1, " ", 1);
}
