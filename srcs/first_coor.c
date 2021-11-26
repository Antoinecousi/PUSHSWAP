/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_coor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:07:46 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 18:13:35 by acousini         ###   ########.fr       */
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
	if (!pos)
		return (0);
	free(tab);
	return (i / pos);
}
