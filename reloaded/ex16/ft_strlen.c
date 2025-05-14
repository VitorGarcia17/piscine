/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:42:04 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/04 14:42:06 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;

	str = " ";
	str = "\"Answer to the Ultimate Question of Life.\"";
	printf ("%s\nTem %i caracteres\n", str, ft_strlen(str));
	printf ("%s\nTem %lu caracteres\n", str, strlen(str));
	return (0);
}
*/