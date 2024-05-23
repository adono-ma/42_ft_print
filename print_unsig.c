/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsig.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 01:04:01 by adono-ma          #+#    #+#             */
/*   Updated: 2024/05/24 01:04:01 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsig(unsigned int n)
{
	int				num_char;
	unsigned int	numb;

	num_char = 0;
	numb = n;
	if	(n > 9)
	{
		num_char += ft_putunsig(numb / 10);
		num_char += ft_putunsig(numb % 10);
	}
	else
		num_char += ft_putchar(numb + '0');
	return (num_char);
}