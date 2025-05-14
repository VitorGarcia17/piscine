/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:27:47 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/22 18:27:49 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	*str;

	str = "\"Answer to the Ultimate Question of Life.\"";
	printf ("%s\nTem %i caracteres", str, ft_strlen(str));
	return (0);
}
*/