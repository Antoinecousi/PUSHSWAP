/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logictisl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 00:59:28 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 23:02:08 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ls_size(t_db *dbl)
{
	int		i;
	t_lst	*a;

	i = 0;
	a = dbl->f;
	while (a)
	{
		a = a->next;
		i++;
	}
	return (i);
}

void	ft_addfrontlist(t_db *dbl, int val)
{
	t_lst	*a;

	a = malloc(sizeof(t_lst));
	if (!a)
		exit(EXIT_FAILURE);
	a->a = val;
	a->prev = NULL;
	a->next = dbl->f;
	if (dbl->f)
		dbl->f->prev = a;
	else
		dbl->last = a;
	dbl->f = a;
}

void	init_ins(t_cor *ins)
{
	ins->fpos = -1;
	ins->lastpos = 0;
	ins->tot = 0;
	ins->totrr = 0;
	ins->distancetot = 0;
}

void	ft_addbacklist(t_db *dbla, int val)
{
	t_lst	*a;

	a = malloc(sizeof(t_lst));
	if (!a)
		exit(EXIT_FAILURE);
	a->a = val;
	a->prev = dbla->last;
	a->next = NULL;
	if (dbla->last)
		dbla->last->next = a;
	else
		dbla->f = a;
	dbla->last = a;
}

void	ft_init_dblist(t_db *dbla)
{
	dbla->f = 0;
	dbla->last = 0;
}
