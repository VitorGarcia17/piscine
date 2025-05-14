/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:14:27 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/27 14:14:30 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	retorno;

	i = 0;
	retorno = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			retorno = 0;
		i++;
	}
	return (retorno);
}

/*int	main(void)
{
	char	src0[] = " ";
	printf("%i\n", ft_str_is_printable(src0));
	char	src1[] = "abcde";
	printf("%i\n", ft_str_is_printable(src1));
	char	src2[] = "aBcDe";
	printf("%i\n", ft_str_is_printable(src2));
	char	src3[] = "ABCDE";
	printf("%i\n", ft_str_is_printable(src3));
	char	src4[] = "abcde123";
	printf("%i\n", ft_str_is_printable(src4));
	char	src5[] = "aBcDe123";
	printf("%i\n", ft_str_is_printable(src5));
	char	src6[] = "123456";
	printf("%i\n", ft_str_is_printable(src6));
	char	src7[] = "";
	printf("%i\n", ft_str_is_printable(src7));
	return (0);
}*/