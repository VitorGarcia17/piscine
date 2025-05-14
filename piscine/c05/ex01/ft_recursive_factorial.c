/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:36:54 by vipinhei          #+#    #+#             */
/*   Updated: 2025/02/05 13:36:58 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
		total = ft_recursive_factorial(nb - 1);
	total = total * nb;
	return (total);
}

/*#include <stdio.h>
int	main(void)
{
	printf("-1-> %i\n", ft_recursive_factorial(-1));
	printf(" 0-> %i\n", ft_recursive_factorial(0));
	printf(" 1-> %i\n", ft_recursive_factorial(1));
	printf(" 2-> %i\n", ft_recursive_factorial(2));
	printf(" 3-> %i\n", ft_recursive_factorial(3));
	printf(" 4-> %i\n", ft_recursive_factorial(4));
	printf(" 5-> %i\n", ft_recursive_factorial(5));
	return (0);
}
*/