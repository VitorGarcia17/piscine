/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code_examples.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:08:29 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/22 16:08:32 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	swap_int;

	swap_int = *a;
	*a = *b;
	*b = swap_int;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc < 2)
		//FAILURE
	if (argc == 2)
		//SUCCESS

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf ("Valor de i e j antes do ft_swap: %i, %i;\n", i, j);
	ft_swap(&i, &j);
	printf ("Valor de i e j depois do ft_swap: %i, %i;\n", i, j);
	return (0);
}


norminette -R CheckForbiddenSourceHeader

cc -Wall -Wextra -Werror 

git add ex00/ft_
git add ex01/ft_
git add ex02/ft_
git add ex03/ft_
git add ex04/ft_
git add ex05/ft_
git add ex06/ft_
git add ex07/ft_
git add ex08/ft_

git commit -m 'Ex00 - criacao'
git commit -m 'Ex01 - criacao'
git commit -m 'Ex02 - criacao'
git commit -m 'Ex03 - criacao'
git commit -m 'Ex04 - criacao'
git commit -m 'Ex05 - criacao'
git commit -m 'Ex06 - criacao'
git commit -m 'Ex07 - criacao'
git commit -m 'Ex08 - criacao'

find . -not -path '*/.*'

find -name a.out -delete

valgrind ./a.out