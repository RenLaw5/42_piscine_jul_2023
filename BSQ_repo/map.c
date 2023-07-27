/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:56:28 by irubio-m          #+#    #+#             */
/*   Updated: 2023/07/26 18:25:39 by irubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int	fileleng(char *mapname)
{
	int		file;
	char	buffer;
	int		bytesreader;
	int		numbytes;

	numbytes = 0;
	file = open(mapname, O_RDONLY);
	bytesreader = read(file, &buffer, 1);
	while (bytesreader > 0)
	{
		numbytes += bytesreader;
		bytesreader = read(file, &buffer, 1);
	}
	close(file);
	return (numbytes);
}

char	*mapextract(char *mapname)
{
	char	buffer;
	int		bytesreader;
	char	*content;
	int		file;
	int		i;

	content = malloc(fileleng(mapname));
	file = open(mapname, O_RDONLY);
	i = 0;
	while ((bytesreader = read(file, &buffer, 1)) > 0)
	{
		content[i] = buffer;
		i++;
	}
	close(file);
	return (content);
}

int	checckfirstrow(char *arguments, int	tam)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (i < tam - 3)
	{
		if (arguments[i] < '0' || arguments[i] > '9')
			return (0);
		i++;
	}

	while (arguments[i] != '\n')
	{
		while (j < 3)
		{
			if (arguments[i] == arguments[tam - 3 + j])
				count++;
			if (arguments[i] < 32 || arguments[i] > 126)
				return (0);
			j++;
		}
		if (count != 1)
			return (0);
		count = 0;
		j = 0;
		i++;
	}
	return (1);
}

char	*arguments(char *content)
{
	char	*args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	args = NULL;
	while (content[i] != '\n')
	{
		i++;
		count++;
	}
	if (count >= 4)
	{
		if (!checckfirstrow(content, count))
		{
			return (NULL);
		}
		args = malloc(count + 1);
		i = 0;
		while (i < count)
		{
			args[i] =  content[i];
			i++;
		}
		args[i] = '\0';
	}
	return (args);
}
