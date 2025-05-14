/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:32:22 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/27 14:32:24 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	src0[] = " ";
	printf("%s\n", ft_strlowcase(src0));
	char	src1[] = "abcde";
	printf("%s\n", ft_strlowcase(src1));
	char	src2[] = "aBcDe";
	printf("%s\n", ft_strlowcase(src2));
	char	src3[] = "ABCDE";
	printf("%s\n", ft_strlowcase(src3));
	char	src4[] = "abcde123";
	printf("%s\n", ft_strlowcase(src4));
	char	src5[] = "aBcDe123";
	printf("%s\n", ft_strlowcase(src5));
	char	src6[] = "123456";
	printf("%s\n", ft_strlowcase(src6));
	char	src7[] = "";
	printf("%s\n", ft_strlowcase(src7));
	return (0);
}*/