/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacer <Foxy@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 22:56:21 by nacer             #+#    #+#             */
/*   Updated: 2024/12/16 23:23:45 by nacer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strncat(char *dest, char *src, int size, int len_dest)
{
	int	e;

	e = 0;
	while (src[e] != '\0' && size - 1 > e)
	{
		dest[len_dest] = src[e];
		len_dest++;
		e++;
	}
	dest[len_dest] = '\0';
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	len_dest;

	len_dest = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	ft_strncat(dest, src, size - len_dest, len_dest);
	return (len_src + len_dest);
}
