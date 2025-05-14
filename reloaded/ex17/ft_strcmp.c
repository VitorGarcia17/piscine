/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:59:18 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/04 14:59:20 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char *s5;

	s1 = "abcd";
	s2 = "abcd";
	s3 = "0123";
	s4 = "abc";
	s5 = "012";
	printf("01 %i\n", ft_strcmp(s1, s2));
	printf("02 %i\n", ft_strcmp(s1, s3));
	printf("03 %i\n", ft_strcmp(s1, s4));
	printf("04 %i\n", ft_strcmp(s1, s5));
	printf("05 %i\n", ft_strcmp(s5, s4));
	printf("06 %i\n\n", ft_strcmp(s5, s3));
	printf("07 %i\n", strcmp(s1, s2));
	printf("08 %i\n", strcmp(s1, s3));
	printf("09 %i\n", strcmp(s1, s4));
	printf("10 %i\n", strcmp(s1, s5));
	printf("11 %i\n", strcmp(s5, s4));
	printf("12 %i\n", strcmp(s5, s3));
	return (0);
}
*/