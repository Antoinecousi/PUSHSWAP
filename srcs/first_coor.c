/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_coor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:07:46 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 23:02:08 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	r_rr(int *tab, int c, int size)
{
	int		i;
	int		pos;

	i = 0;
	pos = -1;
	while (i < size)
	{
		if (tab[i] == c)
			pos = i;
		i++;
	}
	free(tab);
	if (!pos)
		return (0);
	return (i / pos);
}
