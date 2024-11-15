/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:00:51 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/14 21:13:13 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;
	char	c2;

	c = 'N';
	c2 = 'P';
	if (n < 0)
	{
		write(1, &c, 1);
	}
	else if (n >= 0)
	{
		write(1, &c2, 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(-7);
// 	return (0);
// }
