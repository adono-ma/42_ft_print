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
	lowcase = "0123456789abcdef";
	if (ptr >= 16)
	{
		num_char += put_hex_ptr(ptr / 16);
	}
	num_char += ft_putchar(lowcase[ptr % 16]);
	return (num_char);
}

int	ft_putptr(void *ptr)
{
	int			num_char;
	uintptr_t	numb;

	num_char = 0;
	numb = (uintptr_t)ptr;
	if (numb == 0)
	{
		num_char += write(1, "(nil)", 5);
		return (num_char);
	}
	num_char += write(1, "0x", 2);
	num_char += put_hex_ptr(numb);
	return (num_char);
}
