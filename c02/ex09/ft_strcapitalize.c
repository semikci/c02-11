/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 08:31:01 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/11 18:19:06 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	t;
	int	count;

	count = 0;
	t = 1;
	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (t == 1)
			{
				str[i] -= 32;
				t = 0;
			}
		}
		else if ((str[i] < 58 && str[i] > 47) || (str[i] < 123 && str[i] > 98))
			t = 0;
		else
			t = 1;
		i++;
	}
	return (str);
}
