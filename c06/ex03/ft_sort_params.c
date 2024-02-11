/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku <eulku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:42:25 by eulku             #+#    #+#             */
/*   Updated: 2024/02/11 15:07:06 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_strswp(char **str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] == str2[i])
			i++;
		else if (str1[i] > str2[i])
			return (1);
		else
			return (-1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac - 1)
	{
		j = i;
		while (j < ac - 1)
		{
			if (ft_strcmp(av[i], av[j + 1]) > 0)
			{
				ft_strswp(&av[i], &av[j + 1]);
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (av[i])
	{
		ft_putchar(av[i]);
		ft_putchar("\n");
		i++;
	}
}
