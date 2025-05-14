/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:26:05 by vipinhei          #+#    #+#             */
/*   Updated: 2025/02/03 14:26:09 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	if (to_find[0] == '\0')
		return (&str[0]);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char dest[50] = "Answer to the Ultimate Question of Life Answer";
	char src1[10] = "Answer";
	char src2[10] = "Ultimato";
	char src3[10] = "uestion";
	char src4[10] = "of";
	char src5[10] = " ";
	char src6[10] = "888";
	char src7[10] = "";

	printf("01 %s\n", strstr(dest, src1));
	printf("02 %s\n", strstr(dest, src2));
	printf("03 %s\n", strstr(dest, src3));
	printf("04 %s\n", strstr(dest, src4));
	printf("05 %s\n", strstr(dest, src5));
	printf("04 %s\n", strstr(dest, src6));
	printf("05 %s\n", strstr(dest, src7));
	printf("\n");
	printf("01 %s\n", ft_strstr(dest, src1));
	printf("02 %s\n", ft_strstr(dest, src2));
	printf("03 %s\n", ft_strstr(dest, src3));
	printf("04 %s\n", ft_strstr(dest, src4));
	printf("05 %s\n", ft_strstr(dest, src5));
	printf("04 %s\n", ft_strstr(dest, src6));
	printf("05 %s\n", ft_strstr(dest, src7));

	return (0);
}*/
