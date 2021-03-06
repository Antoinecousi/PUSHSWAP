/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pretri.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:18:30 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 23:02:08 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_quatre_split(t_db *dbla, t_db *dblb)
{
	int	*tab;
	int	med;

	tab = ft_buble(ls_ar(dbla), ls_size(dbla));
	med = tab[ls_size(dbla) - 5];
	while (ls_size(dbla) > 5)
	{
		if (dbla->f->a < med)
			do_pb(dbla, dblb);
		else
			do_ra(dbla, dblb);
	}
	free(tab);
}

int	ft_splitter(t_db *dbla, t_db *dblb, int until, int div_med)
{
	int	i;
	int	med;

	i = 0;
	while (ls_size(dbla) >= until)
	{
		if (ls_size(dbla) <= 10)
			return (0);
		med = ft_get_med_div(ls_ar(dbla), div_med, ls_size(dbla));
		i++;
		if (dbla->f->a <= med)
			do_pb(dbla, dblb);
		else
			do_ra(dbla, dblb);
	}
	return (i);
}

void	sort_more_one_hundred(t_db *dbla, t_db *dblb, int size)
{
	while (ls_size(dbla) > size / 6 && ls_size(dbla) > 10)
		ft_splitter(dbla, dblb, ls_size(dbla) / 10, 12);
	while (ls_size(dbla) > 10)
		ft_splitter(dbla, dblb, ls_size(dbla) / 5, 2);
	if (ls_size(dbla) >= 6 && ls_size(dbla) <= 10)
		ft_quatre_split(dbla, dblb);
	ft_do(dbla, dblb, size);
}

void	sort_one_hundred(t_db *dbla, t_db *dblb, int size)
{
	while (ls_size(dbla) > size / 2 && ls_size(dbla) > 10)
		ft_splitter(dbla, dblb, ls_size(dbla) / 10, 5);
	while (ls_size(dbla) > 10)
		ft_splitter(dbla, dblb, ls_size(dbla) / 5, 2);
	if (ls_size(dbla) >= 6 && ls_size(dbla) <= 10)
		ft_quatre_split(dbla, dblb);
	ft_do(dbla, dblb, size);
}
