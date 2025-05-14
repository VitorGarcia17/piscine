/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:06:09 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/07 15:06:10 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *original = "Copiando string!";
	char *copia = ft_strdup(original);

	if (copia == NULL) {
	    perror("Erro ao duplicar a string");
	    return 1;
	}

	printf("String original: %s\n", original);
	printf("String copiada: %s\n", copia);

	// Não se esqueça de liberar a memória!
	free(copia);
	return (0);
}
*/