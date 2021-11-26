/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_half.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 01:46:21 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 04:20:38 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	take_next(t_db *dbla, t_db *dblb, int *c)
{
	while (dblb->f->a != c[0] && r_rr(ls_ar(dblb), c[0], ls_size(dblb)) > 1)
		do_rb(dbla, dblb);
	while (dblb->f->a != c[0] && r_rr(ls_ar(dblb), c[0], ls_size(dblb)) <= 1)
		do_rrb(dbla, dblb);
	do_pa(dbla, dblb);
}

void	take_inter(t_db *dbla, t_db *dblb, int *c)
{
	int		b;

	if (ft_direction_after_inter(ls_ar(dblb), c[1], c[0], ls_size(dblb)) >= 1)
	{
		b = ft_forwardb(dbla, dblb, c);
		while (--b)
			do_rra(dbla, dblb);
	}
	else
	{
		b = ft_backwardb(dbla, dblb, c);
		while (--b)
			do_rra(dbla, dblb);
	}
}

void	ft_do(t_db *dbla, t_db *dblb, t_ccr *coor)
{
	int		*c;
	int		i;

	i = 0;
	c = ft_bubble(ls_ar(dbla), ls_size(dbla));
	choose_sort_stack(dbla, dblb, coor);
	while (dblb->f)
	{
		c = ft_reverse_bubble(ls_ar(dblb), ls_size(dblb));
		if (dblb->f->a == c[0])
			do_pa(dbla, dblb);
		else if (!ft_take_inter(ls_ar(dblb), c[1], c[0], ls_size(dblb)))
			take_next(dbla, dblb, c);
		else
			take_inter(dbla, dblb, c);
	}
	while (dblb->f)
		do_pa(dbla, dblb);
	free(c);
}