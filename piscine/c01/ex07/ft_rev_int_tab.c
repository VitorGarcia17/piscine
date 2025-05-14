/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:36:34 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/22 18:36:37 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp_int;

	i = 0;
	temp_int = 0;
	while (i < (size / 2))
	{
		temp_int = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = temp_int;
		i++;
	}
}

/*int	main(void)
{
	int tab[20];
	int i;
	int size;

	//Atibuicao de valores
	size = 20;
	i = 0;
	while (i < size)
	{
		tab[i] = (((i * 42) - i) % 100) + 1;
		i++;
	}
	//impressao de posicao
	printf("  Position: ");
	i = 0;
	while (i < size)
	{
		printf("%02d ", i + 1);
		i++;
	}
	printf("\n");
	//impressao de tab
	printf("    Values: ");
	i = 0;
	while (i < size)
	{
		printf("%02d ", tab[i]);
		i++;
	}
	printf("\n");
	//inverte tab
	printf("Inverteded: ");
	ft_rev_int_tab(tab, size);
	//impressao de tab invertido
	i = 0;
	while (i < size)
	{
		printf("%02d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/