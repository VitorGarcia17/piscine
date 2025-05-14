/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:49:39 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/22 13:49:41 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap_int;

	swap_int = *a;
	*a = *b;
	*b = swap_int;
}

/*int	main(void)
{
	int	i;
	int	j;

	i = 42;
	j = 10;
	printf ("Valor de i e j antes do ft_swap: %i, %i;\n", i, j);
	ft_swap(&i, &j);
	printf ("Valor de i e j depois do ft_swap: %i, %i;\n", i, j);
	return (0);
}
*/