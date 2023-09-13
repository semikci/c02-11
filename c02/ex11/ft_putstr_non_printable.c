/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 03:49:06 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/11 20:03:47 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	tmp;
	unsigned char	*cursor;
	char			*hex_symbols;

	hex_symbols = "0123456789abcdef";
	cursor = (unsigned char *)str;
	while (*cursor != '\0')
	{
		if (*cursor >= ' ' && *cursor <= '~')
			write(1, cursor, 1);
		else
		{
			ft_putchar('\\');
			tmp = *cursor / 16;
			ft_putchar(hex_symbols[tmp]);
			tmp = *cursor % 16;
			ft_putchar(hex_symbols[tmp]);
		}
		cursor++;
	}
}
