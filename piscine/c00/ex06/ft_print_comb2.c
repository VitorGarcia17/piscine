/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:21:14 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/20 15:21:16 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_comb(char i, char j, char k, char l)
{
	if (!(i == k && j == l))
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, " ", 1);
		write(1, &k, 1);
		write(1, &l, 1);
		if (i != '9' || j != '8' || k != '9' || l != '9')
			write(1, ", ", 2);
	}
}

void	ft_loop_comp(int i, int j, int k, int l)
{
	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = i;
			l = j + 1;
			while (k <= '9')
			{
				l = j + 1;
				while (l <= '9')
				{
					ft_put_comb(i, j, k, l);
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;
	char	l;

	ft_loop_comp(i, j, k, l);
}

/*int	main(void)
{
	ft_print_comb ();
	return (0);
}
*/