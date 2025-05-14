/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:35:46 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/16 19:35:48 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	char_reverse_alphabet;

	char_reverse_alphabet = 'z';
	while (char_reverse_alphabet >= 'a')
	{
		write(1, &char_reverse_alphabet, 1);
		char_reverse_alphabet--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet ();
	return (0);
}
*/