/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:34:56 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/27 14:34:57 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_char;

	i = 0;
	first_char = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || (str[i] > 57 && str[i] < 65)
			|| (str[i] > 90 && str[i] < 97) || str[i] > 122)
		{
			first_char = 1;
			i++;
			continue ;
		}
		if (first_char == 1)
		{
			first_char = 0;
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	src0[] = " abcde";
	printf("%s\n", ft_strcapitalize(src0));
	char	src1[] = "  ABCDE";
	printf("%s\n", ft_strcapitalize(src1));
	char	src2[] = " aBcDe";
	printf("%s\n", ft_strcapitalize(src2));
	char	src3[] = " AbCdE";
	printf("%s\n", ft_strcapitalize(src3));
	char	src4[] = "abcde";
	printf("%s\n", ft_strcapitalize(src4));
	char	src5[] = "ABCDE";
	printf("%s\n", ft_strcapitalize(src5));
	char	src6[] = "aBcDe";
	printf("%s\n", ft_strcapitalize(src6));
	char	src7[] = "AbCdE";
	printf("%s\n", ft_strcapitalize(src7));
	char	src8[] = "abcde A+BC+DE  aBcDe Ab-C-dE 42AbCdE";
	printf("%s\n", ft_strcapitalize(src8));
	char	src9[] = "";
	printf("%s\n", ft_strcapitalize(src9));
	return (0);
}*/