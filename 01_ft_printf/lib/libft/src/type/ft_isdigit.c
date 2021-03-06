/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 12:53:41 by jaeskim           #+#    #+#             */
/*   Updated: 2020/09/27 08:21:48 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_isdigit - checks for a digit (0 through 9)
*/

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
