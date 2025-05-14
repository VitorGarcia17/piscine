/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:45:51 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/07 15:45:53 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*range;

	if (min >= max)
		return (NULL);
	size = (max - min);
	range = (int *)malloc(size * sizeof(int));
	if (!range)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	int	i;
	int	*inteiros;

	inteiros = ft_range(-1, 5);
	if (inteiros == NULL) {
	    perror("Erro ao gerar Range");
	    return 1;
	}
	i = 0;
	while (inteiros[i] < (6))
	{
		printf("%i\n", inteiros[i]);
		i++;
	}
	return (0);
}
*/