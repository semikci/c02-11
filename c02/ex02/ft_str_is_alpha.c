/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:16:09 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/11 17:57:18 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	return_size(char *a)
{
	int	k;

	k = 0;
	while (a[k] != '\0')
	{
		k++;
	}
	return (k);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	a;

	i = 0;
	while (str[i] != '\0' && ((str[i] >= 'a' && str[i] <= 'z') 
			|| (str[i] >= 'A' && str[i] <= 'Z')))
	{
		i++;
	}
	a = return_size(str);
	if (a == i)
		return (1);
	else
		return (0);
}
