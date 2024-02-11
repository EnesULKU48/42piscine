/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku <eulku@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:54:18 by eulku             #+#    #+#             */
/*   Updated: 2024/01/25 20:14:38 by eulku            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	first;
	int	second;
	int	third;

	first = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			third = first + 2;
			while (third <= '9')
			{
				write(1, &first, 1);
				write(1, &second, 1);
				write(1, &third, 1);
				if (first != '7')
					write (1, &", ", 2);
				third++;
			}
			second++;
		}
		first++;
	}
}

int main()
{
	ft_print_comb();
}
