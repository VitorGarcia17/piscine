/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:06:05 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/16 19:06:08 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	char_alphabet;

	char_alphabet = 'a';
	while (char_alphabet <= 'z')
	{
		write(1, &char_alphabet, 1);
		char_alphabet++;
	}
}

/*int	main(void)
{
	ft_print_alphabet ();
	return (0);
}
*/