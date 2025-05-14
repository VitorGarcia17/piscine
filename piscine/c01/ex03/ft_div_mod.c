/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:15:12 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/22 15:15:15 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	i;
	int	j;
	int	div;
	int	mod;

	i = 42;
	j = 10;
	div = 0;
	mod = 0;
	ft_div_mod(i, j, &div, &mod);
	printf ("i, j, i div j, i mod j: %i, %i, %i, %i;\n", i, j, div, mod);
	return (0);
}
*/