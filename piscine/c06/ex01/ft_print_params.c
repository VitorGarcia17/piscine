/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:27:08 by vipinhei          #+#    #+#             */
/*   Updated: 2025/02/06 18:27:10 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstring(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		ft_putstring("Nenhum Parametro passado");
	if (argc >= 2)
	{
		i = 0;
		while (argv[i])
		{
			ft_putstring(argv[i]);
			ft_putstring("\n");
			i++;
		}
	}
	return (0);
}
