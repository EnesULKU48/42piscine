/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku <eulku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:48:07 by eulku             #+#    #+#             */
/*   Updated: 2024/02/09 20:28:34 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	total;

	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	total = 1;
	while (power > 0)
	{
		total *= nb;
		power--;
	}
	return (total);
}
