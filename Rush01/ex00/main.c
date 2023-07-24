/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:09:52 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/15 17:36:55 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
void	print_error();
void	rush01(char *str);
int		check_comb(char *str);

int	main(int argc, char *argv[])
{
	int	len;

	if (argc != 2)
	{
		print_error();
		return (0);
	}
	len = ft_strlen(argv[1]);
	if (len != 31)
	{
		print_error();
		return (0);
	}
	if (check_comb(argv[1]) == 1)
	{
		print_error();
		return (0);
	}
	//else
		//rush01(argv[1]);
	return (0);
}
