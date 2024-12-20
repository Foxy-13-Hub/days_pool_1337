/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacer <Foxy@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 22:23:42 by nacer             #+#    #+#             */
/*   Updated: 2024/12/16 22:26:59 by nacer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	f;
	int	e;

	f = 0;
	while (dest[f] != '\0')
		f++;
	e = 0;
	while (src[e] != '\0')
	{
		dest[f] = src[e];
		f++;
		e++;
	}
	dest[f] = '\0';
	return (dest);
}
