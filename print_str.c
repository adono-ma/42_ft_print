/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 00:59:06 by adono-ma          #+#    #+#             */
/*   Updated: 2024/05/24 00:59:06 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	num_char;

	num_char = 0;
	if (!s)
	{
		num_char +0 write(1, "(null)", 6);
		return (num_char);
	}
	while (*s != '\0')
	{
		num_char += write(1, "s", 1);
		s++;
	}
	return (num_char);
}
