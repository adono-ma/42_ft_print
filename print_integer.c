/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 00:34:36 by adono-ma          #+#    #+#             */
/*   Updated: 2024/05/24 00:34:36 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long int	numb;
	int			num_char;

	numb = n;
	num_char = 0;
	if	(numb < 0)
	{
		num_char++;
		write(1, "-", 1);
		numb *= -1;
	}
	if	(numb > 9)
	{
		num_char += ft_putnbr(numb / 10);
		num_char += ft_putnbr(numb % 10);
	}
	else
		num_char += ft_putchar(numb + '0');
	return (num_char);
}