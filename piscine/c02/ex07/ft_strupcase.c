/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:22:48 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/27 14:22:50 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	src0[] = " ";
	printf("%s\n", ft_strupcase(src0));
	char	src1[] = "abcde";
	printf("%s\n", ft_strupcase(src1));
	char	src2[] = "aBcDe";
	printf("%s\n", ft_strupcase(src2));
	char	src3[] = "ABCDE";
	printf("%s\n", ft_strupcase(src3));
	char	src4[] = "abcde123";
	printf("%s\n", ft_strupcase(src4));
	char	src5[] = "aBcDe123";
	printf("%s\n", ft_strupcase(src5));
	char	src6[] = "123456";
	printf("%s\n", ft_strupcase(src6));
	char	src7[] = "";
	printf("%s\n", ft_strupcase(src7));
	return (0);
}*/