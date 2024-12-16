/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacer <Foxy@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:08:38 by nacer             #+#    #+#             */
/*   Updated: 2024/12/16 14:09:26 by nacer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char f)
{
	write(1, &f, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	d;

	d = 122;
	while (d >= 97)
	{
		ft_write(d);
		d--;
	}
}
//int main
/*int main()
{
    ft_print_reverse_alphabet();
}*/
