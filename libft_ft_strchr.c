/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_ft_strchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 00:03:45 by adono-ma          #+#    #+#             */
/*   Updated: 2024/05/24 00:03:45 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	*cpy;

	i = 0;
	cpy = (unsigned char *)str;
	while	(cpy[i] != NULL)
	{
		if	(cpy[i] == (unsigned char)c)
			return ((char *)cpy + i);
		i++;
	}
	if	(cpy[i] == (unsigned char)c)
		return ((char *)cpy + i);
	else
		return (0);
}