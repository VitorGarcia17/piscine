/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:01:49 by vipinhei          #+#    #+#             */
/*   Updated: 2025/02/03 16:01:51 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	c = c + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb = nb * -1;
			write(1, "-", 1);
		}
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10);
	}
}

/*int	main(void)
{
	ft_putnbr(42);
	return (0);
}
*/