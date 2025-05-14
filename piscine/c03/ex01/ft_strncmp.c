/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:18:41 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/28 15:18:45 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	int n;
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char *s5;

	n = 0;
	s1 = "abcdefg";
	s2 = "abcdefg";
	s3 = "0123456";
	s4 = "";
	s5 = " ";
	printf("01 %i\n", ft_strncmp(s1, s2, n));
	printf("02 %i\n", ft_strncmp(s1, s3, n));
	printf("03 %i\n", ft_strncmp(s1, s4, n));
	printf("04 %i\n", ft_strncmp(s1, s5, n));
	printf("05 %i\n", ft_strncmp(s5, s4, n));
	printf("06 %i\n\n", ft_strncmp(s5, s3, n));
	printf("07 %i\n", strncmp(s1, s2, n));
	printf("08 %i\n", strncmp(s1, s3, n));
	printf("09 %i\n", strncmp(s1, s4, n));
	printf("10 %i\n", strncmp(s1, s5, n));
	printf("11 %i\n", strncmp(s5, s4, n));
	printf("12 %i\n", strncmp(s5, s3, n));
	return (0);
}
*/