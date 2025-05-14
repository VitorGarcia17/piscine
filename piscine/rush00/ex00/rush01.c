/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:52:58 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/18 13:53:07 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	coll;

	line = 0;
	coll = 0;
	while (line < y)
	{
		while (coll < x)
		{
			if (line == 0 && coll == 0 || (line == y -1 && coll == x - 1))
				ft_putchar('/');
			else if (line == 0 && coll == x - 1 || (line == y -1 && coll == 0))
				ft_putchar('\\');
			else if (coll > 0 && coll < x - 1 && line > 0 && line < y - 1)
				ft_putchar(' ');
			else
				ft_putchar('*');
			coll++;
		}
		coll = 0;
		line++;
		ft_putchar('\n');
	}
}
