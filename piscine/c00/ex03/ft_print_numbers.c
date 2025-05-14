/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:54:10 by vipinhei          #+#    #+#             */
/*   Updated: 2025/01/16 19:54:14 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	char_number;

	char_number = '0';
	while (char_number <= '9')
	{
		write(1, &char_number, 1);
		char_number++;
	}
}

/*int	main(void)
{
	ft_print_numbers ();
	return (0);
}
*/