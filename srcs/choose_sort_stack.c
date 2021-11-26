/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_sort_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 01:43:53 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 04:20:38 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_one_to_five(t_db *dbla, t_db *dblb)
{
	while (ls_size(dbla) == 4
		&& ft_same(dbla, ft_bubble(ls_ar(dbla), ls_size(dbla)), ls_size(dbla)))
		move_four(dbla, dblb);
	while (ls_size(dbla) == 5
		&& ft_same(dbla, ft_bubble(ls_ar(dbla), ls_size(dbla)), ls_size(dbla)))
		move_five(dbla, dblb);
	sort_three_numbers(dbla, dblb);
	while (ls_size(dblb) > 0 && ls_size(dbla) < 5)
		do_pa(dbla, dblb);
	if (dbla->f->a > dbla->f->next->a)
		do_sa(dbla, dblb);
}

void	choose_sort_stack(t_db *dbla, t_db *dblb, t_ccr *coor)
{
	if (ls_size(dbla) <= 3)
		sort_three_numbers(dbla, dblb);
	else if (ls_size(dbla) > 3 && ls_size(dbla) <= 5)
		sort_one_to_five(dbla, dblb);
	else if (ls_size(dbla) <= 100)
		sort_one_hundred(dbla, dblb, coor);
	else
		sort_more_one_hundred(dbla, dblb, coor);
}
