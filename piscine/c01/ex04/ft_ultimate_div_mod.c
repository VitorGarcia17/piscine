/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:03:25 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/22 16:03:27 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	i;
	int	j;

	i = 42;
	j = 10;
	printf ("Valores de i, j: %i, %i;\n", i, j);
	ft_ultimate_div_mod(&i, &j);
	printf ("Valores de i div j, i mod j: %i, %i;\n", i, j);
	return (0);
}
*/