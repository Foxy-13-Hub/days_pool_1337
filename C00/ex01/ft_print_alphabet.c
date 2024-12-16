/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacer <Foxy@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:05:15 by nacer             #+#    #+#             */
/*   Updated: 2024/12/16 14:07:18 by nacer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char f)
{
	write(1, &f, 1);
}

void	ft_print_alphabet(void)
{
	char	f;

	f = 97;
	while (f <= 122)
	{
		ft_write(f);
		f++;
	}
}
//int main
/*int main()
{
    ft_print_alphabet();
}*/
