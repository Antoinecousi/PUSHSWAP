/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_second.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 01:36:41 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 04:20:38 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	do_pa(t_db *dbla, t_db *dblb)
{
	write(1, "pa\n", 3);
	ft_pa(dbla, dblb);
}

void	do_rrr(t_db *dbla, t_db *dblb)
{
	write(1, "rrr\n", 4);
	ft_rrr(dbla, dblb);
}

void	do_rr(t_db *dbla, t_db *dblb)
{
	write(1, "rr\n", 3);
	ft_rr(dbla, dblb);
}
