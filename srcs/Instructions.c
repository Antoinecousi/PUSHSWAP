/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:13:03 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 16:59:21 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sa(t_db *dbla)
{
	t_lst	*a;
	int		copy;
	int		copy2;

	if (ls_size(dbla) < 2)
		return ;
	a = dbla->f;
	copy = a->a;
	a = a->next;
	copy2 = a->a;
	a->a = copy;
	a = dbla->f;
	a->a = copy2;
}

void	ft_sb(t_db *dblb)
{
	t_lst	*b;
	int		copy;
	int		copy2;

	if (ls_size(dblb) < 2)
		return ;
	b = dblb->f;
	copy = b->a;
	b = b->next;
	copy2 = b->a;
	b->a = copy;
	b = dblb->f;
	b->a = copy2;
}

void	ft_ss(t_db *dbla, t_db *dblb)
{
	ft_sa(dbla);
	ft_sb(dblb);
}

void	ft_pa(t_db *dbla, t_db *dblb)
{
	t_lst	*b;

	if (ls_size(dblb) < 1)
		return ;
	b = dblb->f;
	ft_addfrontlist(dbla, b->a);
	dblb->f = b->next;
	if (!b->next)
		dblb->last = NULL;
	free(b);
}

void	ft_pb(t_db *dbla, t_db *dblb)
{
	t_lst	*a;

	if (ls_size(dbla) < 1)
		return ;
	a = dbla->f;
	ft_addfrontlist(dblb, a->a);
	dbla->f = a->next;
	if (!a->next)
		dbla->last = NULL;
	free(a);
}
