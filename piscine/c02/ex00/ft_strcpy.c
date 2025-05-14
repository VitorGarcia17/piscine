/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:13:40 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/23 12:13:44 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Answer to the Ultimate Question of Life";
	char	dest[] = "Woooooooooooooooooooooooooooooooooooooooooooo";
	printf("%s\n", strcpy(dest, src));
	char	src2[] = "Answer to the Ultimate Question of Life";
	char	dest2[] = "Woooooooooooooooooooooooooooooooooooooooooooo";
	printf("%s\n", ft_strcpy(dest2, src2));
	return (0);
}*/