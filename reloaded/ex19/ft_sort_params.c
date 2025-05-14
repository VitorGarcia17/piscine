/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:59:01 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/07 12:59:04 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstring(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_array(char **tab, int size)
{
	int		i;
	char	*temp_int;

	i = 1;
	while (i < size - 1)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			temp_int = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp_int;
			i--;
		}
		else
			i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (0);
	if (argc >= 2)
	{
		ft_sort_array(argv, argc);
		i = 1;
		while (i < argc)
		{
			ft_putstring(argv[i]);
			ft_putstring("\n");
			i++;
		}
	}
	return (0);
}
