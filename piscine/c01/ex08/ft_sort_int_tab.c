/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:49:53 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/22 20:49:55 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp_int;

	i = 0;
	j = 0;
	temp_int = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp_int = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp_int;
			i--;
		}
		else
			i++;
	}
}

/*int	main(void)
{
	int	tab[20];
	int	i;
	int	size;

	//Atibuicao de valores
	size = 20;
	i = 0;
	while (i < size)
	{
		tab[i] = (((i * 42) - i) % 100) + 1;
		i++;
	}
	//impressao de posicao
	i = 0;
	printf("Position: ");
	while (i < size)
	{
		printf("%02d ", i + 1);
		i++;
	}
	printf("\n");
	//impressao de tab
	i = 0;
	printf("  Values: ");
	while (i < size)
	{
		printf("%02d ", tab[i]);
		i++;
	}
	printf("\n");
	//inverte tab
	ft_sort_int_tab(tab, size);
	//impressao de tab invertido
	i = 0;
	printf("  Sorted: ");
	while (i < size)
	{
		printf("%02d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/