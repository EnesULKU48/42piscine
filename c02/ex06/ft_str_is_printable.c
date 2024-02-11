/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku <eulku@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:58:33 by eulku             #+#    #+#             */
/*   Updated: 2024/02/01 11:58:34 by eulku            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	kosul;

	i = 0;
	kosul = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 126 && str[i] >= 32))
			kosul = 0;
		i++;
	}
	return (kosul);
}
