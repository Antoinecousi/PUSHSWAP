/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter_inside.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodjian <dovdjianpro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:03:31 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 20:22:28 by dodjian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_forwardb(t_db *dbla, t_db *dblb, int *bub)
{
	int		i;

	i = 1;
	while (dblb->f->a != bub[1]
		&& r_rr(ls_ar(dblb), bub[1], ls_size(dblb)) > 1)
		do_rb(dbla, dblb);
	while (dblb->f->a != bub[1]
		&& r_rr(ls_ar(dblb), bub[1], ls_size(dblb)) <= 1)
		do_rrb(dbla, dblb);
	if (dblb->f->a == bub[1])
		do_pa(dbla, dblb);
	bub = ft_reverse_bubble(ls_ar(dblb), ls_size(dblb));
	while (dblb->f->a != bub[0]
		&& r_rr(ls_ar(dblb), bub[0], ls_size(dblb)) > 1)
		do_rb(dbla, dblb);
	while (dblb->f->a != bub[0]
		&& r_rr(ls_ar(dblb), bub[0], ls_size(dblb)) <= 1)
		do_rrb(dbla, dblb);
	do_pa(dbla, dblb);
	do_sa(dbla, dblb);
	free(bub);
	return (i);
}

int	ft_backwardb(t_db *dbla, t_db *dblb, int *bub)
{
	int		i;

	i = 1;
	while (dblb->f->a != bub[1]
		&& r_rr(ls_ar(dblb), bub[1], ls_size(dblb)) > 1)
		do_rb(dbla, dblb);
	while (dblb->f->a != bub[1]
		&& r_rr(ls_ar(dblb), bub[1], ls_size(dblb)) <= 1)
		do_rrb(dbla, dblb);
	if (dblb->f->a == bub[1])
		do_pa(dbla, dblb);
	bub = ft_reverse_bubble(ls_ar(dblb), ls_size(dblb));
	while (dblb->f->a != bub[0]
		&& r_rr(ls_ar(dblb), bub[0], ls_size(dblb)) > 1)
		do_rb(dbla, dblb);
	while (dblb->f->a != bub[0]
		&& r_rr(ls_ar(dblb), bub[0], ls_size(dblb)) <= 1)
		do_rrb(dbla, dblb);
	do_pa(dbla, dblb);
	do_sa(dbla, dblb);
	free(bub);
	return (i);
}
