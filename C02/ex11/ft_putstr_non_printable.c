/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacer <Foxy@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 21:48:25 by nacer             #+#    #+#             */
/*   Updated: 2024/12/16 22:03:14 by nacer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char f)
{
	write(1, &f, 1);
}

void	ft_sort(char *str)
{
	int	r;

	r = 0;
	ft_write(92);
	if (str[r] <= 15 && str[r] >= 0)
	{
		ft_write(48);
		if (str[r] <= 9 && str[r] >= 0)
			ft_write(str[r] + 48);
		else
			ft_write(str[r] + 87);
	}
	else
	{
		ft_write(49);
		if (str[r] <= 25 && str[r] >= 16)
			ft_write(str[r] + 32);
		else
			ft_write(str[r] + 71);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	r;

	r = 0;
	while (str[r] != '\0')
	{
		if (str[r] <= 126 && str[r] >= 32)
			ft_write(str[r]);
		else
			ft_sort(&str[r]);
		r++;
	}
}
