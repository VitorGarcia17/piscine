/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:04:07 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/04 13:04:11 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	char_alphabet;

	char_alphabet = 'a';
	while (char_alphabet <= 'z')
	{
		ft_putchar(char_alphabet);
		char_alphabet++;
	}
}

/*int	main(void)
{
	ft_print_alphabet ();
	return (0);
}
*/