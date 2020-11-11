/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 02:19:35 by jaeskim           #+#    #+#             */
/*   Updated: 2020/11/11 23:04:16 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <unistd.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int c1;
	int c2;
	long long int lli;
	char buf1[100000] = {0, };
	char buf2[100000] = {0, };

	const char *format = "%.2001f";
	// printf("%s\n", ft_dtoa(__DBL_MIN__, 2000, 'f'));
	c1 = ft_printf(format, __DBL_MIN__);
	printf("$\n[ft_printf - count] : %d\n", c1);
	c2 = printf(format, __DBL_MIN__);
	printf("$\n[printf - count] : %d\n", c2);

	// printf("-----------------\n");

	// c1 = ft_sprintf(buf1,format, __DBL_MIN__);
	// printf("%s$\n[ft_sprintf - count] : %d\n", buf1, c1);
	// c2 = sprintf(buf2, format, __DBL_MIN__);
	// printf("%s$\n[sprintf - count] : %d\n", buf2, c2);
	return (0);
}
