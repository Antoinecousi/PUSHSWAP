/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_coor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodjian <dovdjianpro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:07:46 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 19:46:13 by dodjian          ###   ########.fr       */
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
