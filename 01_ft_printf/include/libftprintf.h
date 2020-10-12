/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 01:49:19 by jaeskim           #+#    #+#             */
/*   Updated: 2020/10/12 20:47:58 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <libft.h>
# include <stdarg.h>

# include <stdio.h>

typedef struct	s_printf_flag
{
	
}				t_printf_flag;

int		ft_printf(const char *format, ...);
int		ft_format_int(char **format, va_list ap, char **result);
char	*ft_str_add_char_with_free(char *s1, char c);

#endif