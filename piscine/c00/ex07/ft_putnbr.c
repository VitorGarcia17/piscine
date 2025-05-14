/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:57:40 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/20 16:57:42 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	digits[15];

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else
	{
		i = 0;
		if (nb < 0)
		{
			nb = nb * -1;
			ft_putchar('-');
		}
		while (nb > 0)
		{
			digits[i++] = (nb % 10) + '0';
			nb = nb / 10;
		}
		while (i >= 0)
		{
			ft_putchar(digits[i--]);
		}
	}
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/