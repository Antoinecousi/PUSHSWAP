/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_second.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 01:27:40 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 04:20:38 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rb(t_db *dbla)
{
	t_lst	*a;

	if (ls_size(dbla) < 2)
		return ;
	a = dbla->f;
	ft_addbacklist(dbla, a->a);
	dbla->f = a->next;
	free(a);
}

void	ft_rr(t_db *dbla, t_db *dblb)
{
	ft_ra(dbla);
	ft_rb(dblb);
}

void	ft_rra(t_db *dbla)
{
	t_lst	*a;

	if (ls_size(dbla) < 2)
		return ;
	a = dbla->last;
	ft_addfrontlist(dbla, a->a);
	dbla->last = a->prev;
	a->prev->next = NULL;
	free(a);
}

void	ft_rrb(t_db *dbla)
{
	t_lst	*a;

	if (ls_size(dbla) < 2)
		return ;
	a = dbla->last;
	ft_addfrontlist(dbla, a->a);
	dbla->last = a->prev;
	a->prev->next = NULL;
	free(a);
}

void	ft_rrr(t_db *dbla, t_db *dblb)
{
	ft_rra(dbla);
	ft_rrb(dblb);
}
