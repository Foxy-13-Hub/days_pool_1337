/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacer <Foxy@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:20:04 by nacer             #+#    #+#             */
/*   Updated: 2024/12/16 14:25:48 by nacer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char f)
{
	write(1, &f, 1);
}

void	ft_print_comb2(void)
{
	int	f;
	int	n;

	f = 0;
	while (f <= 98)
	{
		n = f + 1;
		while (n <= 99)
		{
			ft_write((f / 10) + 48);
			ft_write((f % 10) + 48);
			ft_write(' ');
			ft_write((n / 10) + 48);
			ft_write((n % 10) + 48);
			if (f != 98)
				write(1, ", ", 2);
			n++;
		}
		f++;
	}
}
//int main
/*int main()
{
	ft_print_comb2();
}*/
