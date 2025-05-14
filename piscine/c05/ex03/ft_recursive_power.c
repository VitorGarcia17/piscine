/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:59:03 by vipinhei          #+#    #+#             */
/*   Updated: 2025/02/05 14:59:05 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	total;

	total = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	if (power > 1)
		total = total * ft_recursive_power(nb, power - 1);
	return (total);
}

/*#include <stdio.h>
int	main(void)
{
	printf("0 ^ 0 -> %i\n", ft_recursive_power(0, 0));
	printf("0 ^ 1 -> %i\n", ft_recursive_power(0, 1));
	printf("1 ^ 0 -> %i\n", ft_recursive_power(1, 0));
	printf("1 ^ 1 -> %i\n", ft_recursive_power(1, 1));
	printf("2 ^ 2 -> %i\n", ft_recursive_power(2, 2));
	printf("5 ^ 3 -> %i\n", ft_recursive_power(5, 3));
	printf("2 ^ 10 -> %i\n", ft_recursive_power(2, 10));
	return (0);
}
*/