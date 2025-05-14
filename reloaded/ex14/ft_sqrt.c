/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:12:13 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/04 14:12:18 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while ((i * i) < nb)
	{
		i++;
	}
	if ((i * i) == nb)
		return (i);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("Raiz de 0 -> %i\n", ft_sqrt(0));
	printf("Raiz de 1 -> %i\n", ft_sqrt(1));
	printf("Raiz de 2 -> %i\n", ft_sqrt(2));
	printf("Raiz de 3 -> %i\n", ft_sqrt(3));
	printf("Raiz de 4 -> %i\n", ft_sqrt(4));
	printf("Raiz de 5 -> %i\n", ft_sqrt(5));
	printf("Raiz de 6 -> %i\n", ft_sqrt(6));
	printf("Raiz de 7 -> %i\n", ft_sqrt(7));
	printf("Raiz de 8 -> %i\n", ft_sqrt(8));
	printf("Raiz de 9 -> %i\n", ft_sqrt(9));
	printf("Raiz de 16 -> %i\n", ft_sqrt(16));
	printf("Raiz de 25 -> %i\n", ft_sqrt(25));
	printf("Raiz de 36 -> %i\n", ft_sqrt(36));
	printf("Raiz de 49 -> %i\n", ft_sqrt(49));
	printf("Raiz de 64 -> %i\n", ft_sqrt(64));
	printf("Raiz de 81 -> %i\n", ft_sqrt(81));
	printf("Raiz de 100 -> %i\n", ft_sqrt(100));
	return (0);
}
*/