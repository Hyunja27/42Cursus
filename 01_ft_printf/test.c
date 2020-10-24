/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 02:19:35 by jaeskim           #+#    #+#             */
/*   Updated: 2020/10/24 18:46:14 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "ft_utf8.h"
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

	const char *format = "%.*s";

	c1 = ft_printf(format, 3, "hello");
	printf("$\n[ft_printf - count] : %d\n", c1);
	c2 = printf(format, 3, "hello");
	printf("$\n[printf - count] : %d\n", c2);

	printf("-----------------\n");

	c1 = ft_sprintf(buf1,format, 3, "hello");
	printf("%s$\n[ft_sprintf - count] : %d\n", buf1, c1);
	c2 = sprintf(buf2, format, 3, "hello");
	printf("%s$\n[sprintf - count] : %d\n", buf2, c2);
	return (0);
}
