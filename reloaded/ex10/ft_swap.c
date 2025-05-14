/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:25:45 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/04 13:25:46 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp_nbr;

	temp_nbr = *a;
	*a = *b;
	*b = temp_nbr;
}

/*#include <stdio.h>
int	main(void)
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