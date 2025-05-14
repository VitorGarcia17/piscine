/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:09:42 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/27 14:09:44 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	retorno;

	i = 0;
	retorno = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			retorno = 0;
		i++;
	}
	return (retorno);
}

/*int	main(void)
{
	char	src0[] = " ";
	printf("%i\n", ft_str_is_uppercase(src0));
	char	src1[] = "abcde";
	printf("%i\n", ft_str_is_uppercase(src1));
	char	src2[] = "aBcDe";
	printf("%i\n", ft_str_is_uppercase(src2));
	char	src3[] = "ABCDE";
	printf("%i\n", ft_str_is_uppercase(src3));
	char	src4[] = "abcde123";
	printf("%i\n", ft_str_is_uppercase(src4));
	char	src5[] = "aBcDe123";
	printf("%i\n", ft_str_is_uppercase(src5));
	char	src6[] = "123456";
	printf("%i\n", ft_str_is_uppercase(src6));
	char	src7[] = "";
	printf("%i\n", ft_str_is_uppercase(src7));
	return (0);
}*/