/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacer <Foxy@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:09:58 by nacer             #+#    #+#             */
/*   Updated: 2024/12/16 14:10:40 by nacer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char d)
{
	write(1, &d, 1);
}

void	ft_print_numbers(void)
{
	char	f;

	f = 48;
	while (f <= 57)
	{
		ft_write(f);
		f++;
	}
}
//int main
/*int main()
{
    ft_print_numbers();
}*/
