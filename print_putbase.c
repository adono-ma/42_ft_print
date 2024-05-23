/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_putbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 00:26:31 by adono-ma          #+#    #+#             */
/*   Updated: 2024/05/24 00:26:31 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putbase(unsigned int n, char type)
{
	char	*lowcase;
	char	*upcase;
	int		num_char;

	num_char = 0;
	lowcase = "1234567890abcdef";
	upcase = "1234567890ABCDEF";
	if	(n >= 16)
	{
		num_char += ft_putbase(n / 16, type);
		num_char += ft_putbase(n % 16, type);
	}
	else
	{
		if	(type == 1)
			num_char += ft_putchar(lowcase[n]);
		else
			num_char += ft_putchar(upcase[n]);
	}
	return (num_char);
}