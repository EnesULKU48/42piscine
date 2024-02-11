/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku <eulku@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:01:24 by eulku             #+#    #+#             */
/*   Updated: 2024/02/01 15:01:25 by eulku            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_kontrol;

	i = 0;
	first_kontrol = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (first_kontrol)
			{
				str[i] -= 32;
				first_kontrol = 0;
			}
		}
		else if (str[i] <= '9' && str[i] >= '0')
			first_kontrol = 0;
		else
			first_kontrol = 1;
		i++;
	}
	return (str);
}
