/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_point.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:03:29 by adono-ma          #+#    #+#             */
/*   Updated: 2024/05/24 14:03:29 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_hex_ptr(uintptr_t ptr)
{
	char	*lowcase;
	int		num_char;

	num_char = 0;
	lowcase = "1234567890abcdef";
	if (ptr >= 16)
	{
		num_char += put_hex_ptr(ptr / 16);
		num_char += put_hex_ptr(ptr % 16);
	}
	else
		num_char += ft_putchar(lowcase[ptr]);
	return (num_char);
}

int	ft_putptr(void *ptr)
{
	int			num_char;
	uintptr_t	numb;

	num_char = 0;
	numb = (ui)ptr;
	num_char += write(1, "0x", 2);
	num_char += put_hex_ptr(numb);
	return (num_char);
}
