/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacer <Foxy@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 22:27:43 by nacer             #+#    #+#             */
/*   Updated: 2024/12/16 22:34:17 by nacer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	f;
	unsigned int	n;

	f = 0;
	while (dest[f] != '\0')
		f++;
	n = 0;
	while (src[n] != '\0' && nb > n)
	{
		dest[f] = src[n];
		f++;
		n++;
	}
	dest[f] = '\0';
	return (dest);
}
