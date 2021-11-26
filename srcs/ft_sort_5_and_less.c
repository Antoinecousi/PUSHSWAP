/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5_and_less.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:41:57 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 23:02:08 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	utils_sort_three(t_db *dbla, t_db *dblb)
{
	if (ls_size(dbla) == 1)
		return (0);
	if (ls_size(dbla) == 2)
	{
		if (dbla->f->a > dbla->f->next->a)
			do_sa(dbla, dblb);
		return (-1);
	}
	if (dbla->f->a < dbla->f->next->a
		&& dbla->f->next->a < dbla->f->next->next->a)
		return (-1);
	return (0);
}

void	a_bigger_than_b(t_db *dbla, t_db *dblb)
{
	if (dbla->f->next->a > dbla->f->next->next->a)
	{
		do_sa(dbla, dblb);
		do_rra(dbla, dblb);
	}
	else
	{
		if (dbla->f->a > dbla->f->next->next->a)
			do_ra(dbla, dblb);
		else
			do_sa(dbla, dblb);
	}
}

void	sort_three_numbers(t_db *dbla, t_db *dblb)
{
	if (utils_sort_three(dbla, dblb) == -1)
		return ;
	if (ls_size(dbla) == 1)
		return ;
	if (dbla->f->a > dbla->f->next->a)
		a_bigger_than_b(dbla, dblb);
	else
	{
		if (dbla->f->a > dbla->f->next->next->a)
			do_rra(dbla, dblb);
		else
		{
			do_sa(dbla, dblb);
			do_ra(dbla, dblb);
		}
	}
}

void	move_four(t_db *dbla, t_db *dblb)
{
	int		*tab;
	int		*bubled;

	tab = ls_ar(dbla);
	bubled = ft_buble(tab, ls_size(dbla));
	if (bubled[0] == tab[3])
	{
		do_rra(dbla, dblb);
		do_pb(dbla, dblb);
	}
	else
	{
		while (ls_size(dbla) > 3)
		{
			if (dbla->f->a == bubled[0])
				do_pb(dbla, dblb);
			else
				do_ra(dbla, dblb);
		}
	}
	free(bubled);
}

void	move_five(t_db *dbla, t_db *dblb)
{
	int		*tab;
	int		*bubled;

	tab = ls_ar(dbla);
	bubled = ft_buble(tab, ls_size(dbla));
	if ((bubled[0] == tab[3] && bubled[1] == tab[4])
		|| (bubled[0] == tab[4] && bubled[1] == tab[3]))
	{
		do_rra(dbla, dblb);
		do_rra(dbla, dblb);
		do_pb(dbla, dblb);
		do_pb(dbla, dblb);
	}
	else
	{
		while (ls_size(dbla) > 3)
		{
			if (dbla->f->a == bubled[0] || dbla->f->a == bubled[1])
				do_pb(dbla, dblb);
			else
				do_ra(dbla, dblb);
		}
	}
	free(bubled);
}
