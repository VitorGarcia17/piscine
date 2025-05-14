/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:07:13 by vipinhei          #+#    #+#             */
/*   Updated: 2025/02/05 15:07:15 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;
	int	n1;
	int	n2;
	int	n3;

	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	i = 1;
	n1 = 0;
	n2 = 1;
	while (i < index)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		i++;
	}
	return (n3);
}

/*#include <stdio.h>
int	main(void)
{
	printf("Fibo Pos 0-> %i\n", ft_fibonacci(0));
	printf("Fibo Pos 1-> %i\n", ft_fibonacci(1));
	printf("Fibo Pos 2-> %i\n", ft_fibonacci(2));
	printf("Fibo Pos 3-> %i\n", ft_fibonacci(3));
	printf("Fibo Pos 4-> %i\n", ft_fibonacci(4));
	printf("Fibo Pos 5-> %i\n", ft_fibonacci(5));
	printf("Fibo Pos 6-> %i\n", ft_fibonacci(6));
	printf("Fibo Pos 7-> %i\n", ft_fibonacci(7));
	printf("Fibo Pos 8-> %i\n", ft_fibonacci(8));
	return (0);
}
*/