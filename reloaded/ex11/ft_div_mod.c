/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:32:30 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/04 13:32:32 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int	main(void)
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
	printf ("i = %i, j = %i, i div j = %i, i mod j = %i\n", i, j, div, mod);
	return (0);
}
*/