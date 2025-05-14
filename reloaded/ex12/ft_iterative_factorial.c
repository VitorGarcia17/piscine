/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:37:52 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/04 13:37:54 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb >= 13)
		return (0);
	while (nb > 1)
	{
		total *= nb;
		nb--;
	}
	return (total);
}

/*#include <stdio.h>
int	main(void)
{
	printf(" 08-> %i\n", ft_iterative_factorial(8));
	printf(" 09-> %i\n", ft_iterative_factorial(9));
	printf(" 10-> %i\n", ft_iterative_factorial(10));
	printf(" 11-> %i\n", ft_iterative_factorial(11));
	printf(" 12-> %i\n", ft_iterative_factorial(12));
	printf(" 13-> %i\n", ft_iterative_factorial(13));
	printf(" 14-> %i\n", ft_iterative_factorial(14));
	return (0);
}
*/