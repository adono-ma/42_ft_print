/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:54:31 by adono-ma          #+#    #+#             */
/*   Updated: 2024/05/24 13:54:31 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

/*print_f file (main)*/
int		ft_printf(char const *str, ...);

/*printf tools*/
int		ft_putchar(int c);
int		ft_putnbr(int n);
int		ft_putbase(unsigned int n, char type);
int		ft_putptr(void *ptr);
int		ft_putstr(char *s);
int		ft_putunsig(unsigned int n);

/*printf: libft function*/
char	*ft_strchr(const char *str, int c);

#endif