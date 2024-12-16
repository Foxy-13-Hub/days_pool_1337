/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacer <Foxy@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:13:10 by nacer             #+#    #+#             */
/*   Updated: 2024/12/16 17:35:11 by nacer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_smallall(char *str)
{
	int	f;

	f = 0;
	while (str[f] != '\0')
	{
		if (str[f] <= 90 && str[f] >= 65)
			str[f] += 32;
		f++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	d;
	int	are;

	d = 0;
	ft_smallall(str);
	are = 1;
	while (str[d] != '\0')
	{
		if (str[d] <= 122 && str[d] >= 97)
		{
			if (are == 1)
				str[d] -= 32;
			are = 0;
		}
		else if (str[d] <= 57 && str[d] >= 48)
			are = 0;
		else
			are = 1;
		d++;
	}
	return (str);
}
