/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku <eulku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:48:33 by eulku             #+#    #+#             */
/*   Updated: 2024/02/09 20:34:28 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fib;

	fib = 0;
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	if (index > 1)
	{
		fib = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (fib);
}
