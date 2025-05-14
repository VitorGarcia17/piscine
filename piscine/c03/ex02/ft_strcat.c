/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:25:37 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/28 15:25:39 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int	main(void)
{
	char dest[55] = "xxx";
	char dest2[55] = "xxx";
	char src1[5] = "yyy";
	char src2[5] = " ";
	char src3[5] = "000";
	char src4[5] = "";
	char src5[5] = "888";

	printf("01 %s\n", strcat(dest, src1));
	printf("02 %s\n", strcat(dest, src2));
	printf("03 %s\n", strcat(dest, src3));
	printf("04 %s\n", strcat(dest, src4));
	printf("05 %s\n", strcat(dest, src5));
	printf("\n");
	printf("01 %s\n", ft_strcat(dest2, src1));
	printf("02 %s\n", ft_strcat(dest2, src2));
	printf("03 %s\n", ft_strcat(dest2, src3));
	printf("04 %s\n", ft_strcat(dest2, src4));
	printf("05 %s\n", ft_strcat(dest2, src5));
	return (0);
}
*/