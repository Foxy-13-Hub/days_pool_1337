/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacer <Foxy@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:39:56 by nacer             #+#    #+#             */
/*   Updated: 2024/12/16 18:00:56 by nacer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	si;
	unsigned int	r;

	si = 0;
	r = 0;
	while (src[si] != '\0')
		si++;
	while (src[r] != '\0' && size - 1 > r)
	{
		dest[r] = src[r];
		r++;
	}
	dest[r] = '\0';
	return (si);
}
