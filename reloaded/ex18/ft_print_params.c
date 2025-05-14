/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:03:20 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/04 15:03:21 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
	{
		return (0);
	}
	if (argc >= 2)
	{
		i = 1;
		while (argv[i])
		{
			ft_putstring(argv[i]);
			ft_putstring("\n");
			i++;
		}
	}
	return (0);
}
