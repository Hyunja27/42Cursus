/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 18:16:54 by jaeskim           #+#    #+#             */
/*   Updated: 2020/10/21 15:24:08 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int		ft_parse_type(va_list ap, t_format *pf)
{
	char	**format;

	format = pf->ptr;
	// ft_test_print_sturct(pf);
	if (**format == 'd' || **format == 'i')
		return (ft_print_number(ap, pf));
	if (**format == 'u')
		return (ft_print_unsigned_number(ap, pf));
	if (**format == 'c')
		return (ft_print_char(ap, pf));
	if (**format == 's')
		return (ft_print_string(ap, pf));
	free(pf);
	return (-1);
}
