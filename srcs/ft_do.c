/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:16:41 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 04:20:38 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	do_ra(t_db *dbla, t_db *dblb)
{
	write(1, "ra\n", 3);
	ft_ra(dbla);
	(void)dblb;
}

void	do_rra(t_db *dbla, t_db *dblb)
{
	write(1, "rra\n", 4);
	ft_rra(dbla);
	(void)dblb;
}

void	do_rb(t_db *dbla, t_db *dblb)
{
	write(1, "rb\n", 3);
	ft_rb(dblb);
	(void)dbla;
}

void	do_rrb(t_db *dbla, t_db *dblb)
{
	write(1, "rrb\n", 4);
	ft_rrb(dblb);
	(void)dbla;
}

void	do_pb(t_db *dbla, t_db *dblb)
{
	write(1, "pb\n", 3);
	ft_pb(dbla, dblb);
}
