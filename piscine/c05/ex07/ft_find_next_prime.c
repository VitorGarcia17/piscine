/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:22:03 by vipinhei          #+#    #+#             */
/*   Updated: 2025/02/06 12:22:05 by vipinhei         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (!(ft_is_prime(nb)))
	{
		nb++;
	}
	return (nb);
}

/*#include <stdio.h>
int	main(void)
{
	printf("Next Prime after 0-> %i\n", ft_find_next_prime(0));
	printf("Next Prime after 1-> %i\n", ft_find_next_prime(1));
	printf("Next Prime after 2-> %i\n", ft_find_next_prime(2));
	printf("Next Prime after 3-> %i\n", ft_find_next_prime(3));
	printf("Next Prime after 4-> %i\n", ft_find_next_prime(4));
	printf("Next Prime after 5-> %i\n", ft_find_next_prime(5));
	printf("Next Prime after 6-> %i\n", ft_find_next_prime(6));
	printf("Next Prime after 7-> %i\n", ft_find_next_prime(7));
	printf("Next Prime after 8-> %i\n", ft_find_next_prime(8));
	printf("Next Prime after 9-> %i\n", ft_find_next_prime(9));
	return (0);
}
*/