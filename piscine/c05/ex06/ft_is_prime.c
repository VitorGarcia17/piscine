/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:14:10 by vipinhei          #+#    #+#             */
/*   Updated: 2025/02/06 12:14:12 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int	main(void)
{
	printf("0 IS PRIME-> %i\n", ft_is_prime(0));
	printf("1 IS PRIME-> %i\n", ft_is_prime(1));
	printf("2 IS PRIME-> %i\n", ft_is_prime(2));
	printf("3 IS PRIME-> %i\n", ft_is_prime(3));
	printf("4 IS PRIME-> %i\n", ft_is_prime(4));
	printf("5 IS PRIME-> %i\n", ft_is_prime(5));
	printf("6 IS PRIME-> %i\n", ft_is_prime(6));
	printf("7 IS PRIME-> %i\n", ft_is_prime(7));
	printf("8 IS PRIME-> %i\n", ft_is_prime(8));
	printf("9 IS PRIME-> %i\n", ft_is_prime(9));
	return (0);
}
*/