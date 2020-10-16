/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:47:21 by jaeskim           #+#    #+#             */
/*   Updated: 2020/10/16 18:05:58 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_flag(
		char **out,
		char **format,
		va_list ap,
		t_format_specifier *pformat)
{
	if (**format == '-')
		pformat->is_left = 1;
	if (**format == '0')
		pformat->is_zeropad = 1;
	if (**format == ' ')
		pformat->is_blank = 1;
	if (**format == '+')
		pformat->is_plus = 1;
	if (**format == '#')
		pformat->is_hash = 1;

	++(*format);
	return (ft_parse_check(out, format, ap, pformat));
}
