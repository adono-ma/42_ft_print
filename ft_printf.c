/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:43:53 by adono-ma          #+#    #+#             */
/*   Updated: 2024/05/24 13:43:53 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_things(unsigned int result, int c, va_list arg)
{
	if (c == 'c')
		result += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		result += ft_putstr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		result += ft_putnbr(va_arg(arg, int));
	else if (c == 'x')
		result += ft_putbase(va_arg(arg, unsigned int), 1);
	else if (c == 'X')
		result += ft_putbase(va_arg(arg, unsigned int), 0);
	else if (c == 'p')
		result += ft_putptr(va_arg(arg, void *));
	else if (c == 'u')
		result += ft_putunsig(va_arg(arg, unsigned int));
	else
		result += ft_putchar('%');
	return (result);
}

int	ft_printf(const char *str, ...)
{
	va_list			arg;
	unsigned int	i;
	int				result;
	char			*array;

	i = 0;
	result = 0;
	array = "cspdiuxX %";
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && ft_strchr(array, (const char)str[i + 1]))
		{
			i++;
			result = print_things(result, (int)str[i], arg);
		}
		else
			result += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (result);
}
