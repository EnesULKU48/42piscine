/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku <eulku@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:22:09 by eulku             #+#    #+#             */
/*   Updated: 2024/02/01 11:22:10 by eulku            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	kosul;

	i = 0;
	kosul = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 'z' && str[i] >= 'a'))
			kosul = 0;
		i++;
	}
	return (kosul);
}
