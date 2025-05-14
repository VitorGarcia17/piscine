/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:36:43 by vipinhei          #+#    #+#             */
/*   Updated: 2025/02/03 18:36:49 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	space_check(char c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	sinal_check(char c, int *sinal)
{
	if (c == '-')
		*sinal = *sinal * -1;
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	total;

	sinal = 1;
	total = 0;
	i = 0;
	while (space_check(str[i]))
		i++;
	while (sinal_check(str[i], &sinal))
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		total = total * 10;
		total = total + str[i] - 48;
		i++;
	}
	return (total * sinal);
}

/*int	main(void)
{
	printf("%i\n", ft_atoi("	 ---+--+1234ab567"));
	return (0);
}
*/