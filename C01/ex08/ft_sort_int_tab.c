/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacer <Foxy@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:35:09 by nacer             #+#    #+#             */
/*   Updated: 2024/12/16 15:48:33 by nacer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_small(int *tab, int size)
{
	int	r;
	int	swap;
	int	loc;

	r = 1;
	loc = 0;
	swap = tab[0];
	while (size > r)
	{
		if (swap > tab[r])
		{
			swap = tab[r];
			loc = r;
		}
		r++;
	}
	return (loc);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	loc;
	int	swap;
	int	e;

	e = 0;
	while (size > e)
	{
		loc = ft_small(&tab[e], size - e);
		swap = tab[e];
		tab[e] = tab[loc + e];
		tab[loc + e] = swap;
		e++;
	}
}
