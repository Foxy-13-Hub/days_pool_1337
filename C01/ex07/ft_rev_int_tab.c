/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacer <Foxy@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:32:32 by nacer             #+#    #+#             */
/*   Updated: 2024/12/16 15:34:28 by nacer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	r;
	int	swap;

	r = 0;
	while (size / 2 > r)
	{
		swap = tab[r];
		tab[r] = tab[size - 1 - r];
		tab[size - 1 - r] = swap;
		r++;
	}
}