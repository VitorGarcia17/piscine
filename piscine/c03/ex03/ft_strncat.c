/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:24:28 by vipinhei          #+#    #+#             */
/*   Updated: 2025/02/03 14:24:32 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int	main(void)
{
	unsigned int	nb = 2;
	char dest[55] = "xxx";
	char dest2[55] = "xxx";
	char src1[5] = "yyy";
	char src2[5] = " ";
	char src3[5] = "000";
	char src4[5] = "";
	char src5[5] = "888";

	printf("01 %s\n", strncat(dest, src1, nb));
	printf("02 %s\n", strncat(dest, src2, nb));
	printf("03 %s\n", strncat(dest, src3, nb));
	printf("04 %s\n", strncat(dest, src4, nb));
	printf("05 %s\n", strncat(dest, src5, nb));
	printf("\n");
	printf("01 %s\n", ft_strncat(dest2, src1, nb));
	printf("02 %s\n", ft_strncat(dest2, src2, nb));
	printf("03 %s\n", ft_strncat(dest2, src3, nb));
	printf("04 %s\n", ft_strncat(dest2, src4, nb));
	printf("05 %s\n", ft_strncat(dest2, src5, nb));
	return (0);
}
*/