/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacer <Foxy@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:08:49 by nacer             #+#    #+#             */
/*   Updated: 2024/12/16 17:10:31 by nacer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	r;

	r = 0;
	while (str[r] != '\0')
	{
		if (str[r] <= 122 && str[r] >= 97)
			str[r] -= 32;
		r++;
	}
	return (str);
}
