/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:35:10 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/26 18:33:16 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*arguments(char *content);
char	*mapextract(char *mapname);
int		rowsnumber(char *arguments);

int	check_map(char *file, char *chars)
{
	int	i;
	int	cols;
	int	rows;
	int	pre_cols;

	i = 0;
	cols = 0;
	rows = 0;
	while (file[i] != '\0')
	{
		if (file[i] == '\n')
		{
			rows++;
			if	(rows == 1)
				pre_cols = 0;
			else if (rows == 2 || pre_cols == cols)
				pre_cols = cols;
			else
				return (-1);
			cols = 0;
		}
		else if (rows == 0)
		{
			i++;
			continue ;
		}
		else if (file[i] != chars[0] && file[i] != chars[1] && file[i] != chars[2])
		{
			return (-1);
		}
		i++;
		cols++;
	}
	return (cols);
}

void	bsq(char *path)
{
	char	*file;
	char	*first_line;
	char	*chars;
	int		rows;

	file = mapextract(path);
	first_line = arguments(file);
	rows = rowsnumber(first_line);
	chars = malloc(3 * sizeof (char));
	chars[0] = first_line[rows - 3];
	chars[1] = first_line[rows - 2];
	chars[2] = first_line[rows - 1];
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 1)
	{
		write(1, "Not enough args", 15);
		return(0);
	}
	i = 1;
	while (i < argc)
	{
		bsq(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}