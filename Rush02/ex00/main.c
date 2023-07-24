/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:26:15 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/23 18:35:53 by lafuente         ###   ########.fr       */
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

void	rush02_2arg(char *argv1, char *argv2)
{
	int				f;
	char			*c;
	unsigned int	*digits;

	f = open(argv1, O_RDONLY);
	if (f == -1)
	{
		write(1, "Dict Error", 10);
		return ;
	}
	digits = create_array(argv2);
	c = store_content(f);
	translate(c, digits, ft_strlen(argv2));
	close(f);
}

void	rush02_1arg(char *argv1)
{
	int				f;
	char			*c;
	unsigned int	*digits;

	f = open("numbers.dict", O_RDONLY);
	if (f == -1)
	{
		write(1, "Dict Error", 10);
		return ;
	}
	digits = create_array(argv1);
	c = store_content(f);
	translate(c, digits, ft_strlen(argv1));
	close(f);
}

int	main(int argc, char *argv[])
{
	if (argc != 2 && argc != 3)
		write(1, "Error", 5);
	else if (argc == 2)
	{
		if (check_number(argv[1]) == 0)
			rush02_1arg(argv[1]);
		else
			write(1, "Error", 5);
	}
	else if (argc == 3)
	{
		if (check_number(argv[2]) == 0)
			rush02_2arg(argv[1], argv[2]);
		else
			write(1, "Error", 5);
	}
	write(1, "\n", 1);
	return (0);
}
