/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacer <Foxy@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:58:55 by nacer             #+#    #+#             */
/*   Updated: 2024/12/16 17:56:01 by nacer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	d;

	d = 0;
	if (str[d] != '\0')
	{
		while (str[d] <= 57 && str[d] >= 48)
		{
			d++;
			if (str[d] == '\0')
				return (1);
		}
		return (0);
	}
	return (1);
}
