/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:14:31 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/04 13:14:33 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	char_number;

	char_number = '0';
	while (char_number <= '9')
	{
		ft_putchar(char_number);
		char_number++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers ();
// 	return (0);
// }
