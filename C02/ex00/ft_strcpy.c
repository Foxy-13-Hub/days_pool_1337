/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacer <Foxy@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:47:15 by nacer             #+#    #+#             */
/*   Updated: 2024/12/16 16:49:01 by nacer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	r;

	r = 0;
	while (src[r] != '\0')
	{
		dest[r] = src[r];
		r++;
	}
	dest[r] = '\0';
	return (dest);
}