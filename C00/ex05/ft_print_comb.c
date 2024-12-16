/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacer <Foxy@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:15:21 by nacer             #+#    #+#             */
/*   Updated: 2024/12/16 14:19:40 by nacer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_write(char f)
{
	write(1, &f, 1);
}
void ft_print(char f, char n, char a)
{
	ft_write(f);
	ft_write(n);
	ft_write(a);
	if (f != 55)
		write(1, ", ", 2);
}
void ft_print_comb(void)
{
	char f;
	char n;
	char a;

	f = 48;
	while (f <= 55)
	{
		n = f + 1;
		while (n <= 56)
		{
			a = n + 1;
			while (a <= 57)
			{
				ft_print(f, n, a);
				a++;
			}
			n++;
		}
		f++;
	}
}
//int main
/*int main()
{
	ft_print_comb();
}*/
