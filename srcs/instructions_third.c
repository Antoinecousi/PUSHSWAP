/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_third.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodjian <dovdjianpro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 01:28:53 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 18:47:05 by dodjian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	do_ss(t_db *dbla, t_db *dblb)
{
	write(1, "ss\n", 3);
	ft_ss(dbla, dblb);
}

void	do_sa(t_db *dbla, t_db *dblb)
{
	write(1, "sa\n", 3);
	(void)dblb;
	ft_sa(dbla);
}

void	do_sb(t_db *dbla, t_db *dblb)
{
	write(1, "sb\n", 3);
	(void)dbla;
	ft_sb(dblb);
}

void	ft_ra(t_db *dbla)
{
	t_lst	*a;

	if (ls_size(dbla) < 2)
		return ;
	a = dbla->f;
	ft_addbacklist(dbla, a->a);
	dbla->f = a->next;
	free(a);
}

int	ft_checker(char **splited)
{
	int		i;

	i = 0;
	if (**splited == '\0')
		return (ft_error(splited, 1));
	if (ft_check_doublons(splited))
		return (ft_error(splited, 1));
	while (splited[i])
	{
		if (long_atoi(splited[i]) > INT_MAX || long_atoi(splited[i]) < INT_MIN)
			return (ft_error(splited, 1));
		if (is_not_a_number(splited[i]))
			return (ft_error(splited, 1));
		i++;
	}
	return (0);
}
