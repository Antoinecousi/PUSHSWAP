/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:23:43 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 04:20:38 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_get_med_div(int *tab, int div_med, int size)
{
	tab = ft_bubble(tab, size);
	return (tab[(size - 1) / div_med]);
}

int	ft_fill_stack(char **argv, t_db *dbla)
{
	int		val;
	int		i;

	i = 0;
	while (argv[i] != NULL)
	{
		val = ft_atoi(argv[i]);
		ft_addbacklist(dbla, val);
		i++;
	}
	return (i);
}

int	ft_get_med(int *tab, int size)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	tab = ft_bubble(tab, size);
	return (tab[(i - 1) / 2]);
}

int	*ft_bubble(int *tab, int size)
{
	int		tmp;
	int		i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			if (i > 0)
				i--;
		}
		else
			i++;
	}
	return (tab);
}

int	*ft_reverse_bubble(int *tab, int size)
{
	int		tmp;
	int		i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] < tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			if (i > 0)
				i--;
		}
		else
			i++;
	}
	return (tab);
}
