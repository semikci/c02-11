/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:12:39 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/11 18:18:43 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	return_size(char *dest)
{
	int	a;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	return (a);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	k;

	k = 0;
	if (size == 0)
		return (return_size(src));
	while (k < size -1)
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';
	return (return_size(dest));
}
