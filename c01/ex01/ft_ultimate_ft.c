/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku <eulku@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:18:05 by eulku             #+#    #+#             */
/*   Updated: 2024/01/29 18:18:08 by eulku            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_ft(int ***nbr)
{
	***nbr = 42;
}

int main()
{
	int a = 10;
	int *p1;
	int **p2;
	int ***p3;

	p1 = &a;
	p2 = &p1;
	p3 = &p2;
	
	printf("%d",p1);
}
