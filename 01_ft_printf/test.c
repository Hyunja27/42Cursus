/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 02:19:35 by jaeskim           #+#    #+#             */
/*   Updated: 2020/10/14 20:08:38 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int main(void)
{
	int c1;
	int c2;
	// char buf1[100000] = {0, };
	// char buf2[100000] = {0, };

	// c1 = ft_printf("%dSeoul %c", 42, '!');
	// printf("\n[ft_printf - count] : %d\n", c1);
	c2 = printf("%ll안녕");
	printf("$\n[printf - count] : %d\n", c2);

	printf("%d\n", c1);
	// printf("-----------------\n");

	// c1 = ft_sprintf(buf1,"%dSeoul %c", 42, '!');
	// printf("%s\n[ft_sprintf - count] : %d\n", buf1, c1);
	// c2 = sprintf(buf2, "%dSeoul %c", 42, '!');
	// printf("%s\n[sprintf - count] : %d\n", buf2, c2);
	return (0);
}
