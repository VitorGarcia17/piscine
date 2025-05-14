/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:29:50 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/23 13:29:52 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[] = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
	char	*src;
	int 	size;

	size = 30;
	src = "Answer to the Ultimate Question of Life";
	printf("%s\n", strncpy(dest, src, size));
	printf("%s\n", ft_strncpy(dest, src, size));
	return (0);
}*/