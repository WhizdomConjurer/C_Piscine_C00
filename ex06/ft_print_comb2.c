/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:04:54 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/14 21:13:06 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	x2;

	x = -1;
	while (x++ < 98)
	{
		x2 = x;
		while (x2++ < 99)
		{
			ft_putchar('0' + (x / 10));
			ft_putchar('0' + (x % 10));
			ft_putchar(' ');
			ft_putchar('0' + (x2 / 10));
			ft_putchar('0' + (x2 % 10));
			if (x != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
