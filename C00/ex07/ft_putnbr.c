/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacer <Foxy@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:26:27 by nacer             #+#    #+#             */
/*   Updated: 2024/12/16 14:29:42 by nacer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char f)
{
	write(1, &f, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_write('-');
		ft_putnbr(-nb);
	}
	else if (nb <= 9 && nb >= 0)
		ft_write(nb + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_write((nb % 10) + 48);
	}
}
//int main
/*int main()
{
	ft_putnbr(1337);
}*/
