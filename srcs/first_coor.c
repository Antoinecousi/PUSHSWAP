/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_coor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:07:46 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 15:46:39 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	r_rr(int *tab, int c, int size)
{
	int		i;
	int		pos;

	i = 0;
	pos = -1;
	while (i < size)
	{
		if (tab[i] == c)
			pos = i;
		i++;
	}
	if (!pos)
		return (0);
	free(tab);
	return (i / pos);
}

void	ft_init_first_coor(t_ccr *coor, int argc)
{
	coor->f = INT_MAX;
	coor->posfirst = 0;
	coor->med = 0;
	coor->total = argc;
	coor->last = INT_MIN;
	coor->poslast = 0;
	coor->uppermed = 0;
	coor->lowermed = 0;
	coor->huitieme = 0;
	coor->thihuitieme = 0;
	coor->fouhuitieme = 0;
}

void	ft_fill_first_coor(t_ccr *coor, t_db *dbl)
{
	int	i;
	int	*tab;

	i = 0;
	tab = ls_ar(dbl);
	i = 0;
	coor->med = ft_get_med(tab, ls_size(dbl));
	while (tab[i])
	{
		if (tab[i] < coor->f)
		{
			coor->f = tab[i];
			coor->posfirst = i + 1;
		}
		if (tab[i] > coor->last)
		{
			coor->last = tab[i];
			coor->poslast = i + 1;
		}
		i++;
	}
	ft_fill_first_coor_alt(coor, tab);
}

void	ft_fill_first_coor_alt(t_ccr *coor, int *tab)
{
	int	i;

	i = 0;
	while (tab[i] != coor->med)
	{
		if (tab[i] > coor->med)
			coor->uppermed++;
		else
			coor->lowermed++;
		i++;
	}
}
