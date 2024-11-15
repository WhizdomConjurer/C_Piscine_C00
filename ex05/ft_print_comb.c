/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 08:51:34 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/14 21:12:44 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write(char c, char c2, char c3)
{
	char	s;
	char	co;

	s = ' ';
	co = ',';
	ft_putchar(c);
	ft_putchar(c2);
	ft_putchar(c3);
	if (! ((c == '7') && (c2 == '8') && (c3 == '9')))
	{
		ft_putchar(co);
		ft_putchar(s);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = 1 + i;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_write(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
