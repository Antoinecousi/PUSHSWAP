/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculs_inter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:59:11 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 23:02:08 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_position(int *tab, int inter)
{
	int		i;

	i = 0;
	while (tab[i] != inter)
		i++;
	return (i);
}

int	ft_take_inter(int *tab, int inter, int final, int size)
{
	int		i;
	int		j;
	int		reader;

	i = 0;
	j = 0;
	reader = 0;
	while (tab[i++] != inter)
	{
	}
	while (tab[j++] != final)
	{
	}
	if (j - 1 > size / 2)
		reader = ft_inter_calcul_backward(i - 1, j - 1, size);
	if (j - 1 <= size / 2)
		reader = ft_inter_calcul_forward(i - 1, j - 1, size);
	free(tab);
	return (reader);
}

int	ft_inter_calcul_backward(int inter, int final, int size)
{
	if (inter == final + 1)
		return (0);
	if (inter - 1 > final)
		return (1);
	else if (size - final - inter >= 1 && 2 * size - 3 * final + inter - 1 >= 1)
		return (1);
	else if (final - 3 * inter - 1 >= 1 && size - inter - final - 2 >= 1)
		return (1);
	else
		return (0);
}

int	ft_inter_calcul_forward(int inter, int final, int size)
{
	if (inter < final)
		return (1);
	else if (inter + final - size - 2 >= 1 && 3 * final - inter - 1 >= 1)
		return (1);
	else if (3 * inter - 2 * size - final - 1 >= 1 && final - size + inter >= 1)
		return (1);
	else
		return (0);
}

int	ft_direction_after_inter(int *tab, int inter, int final, int size)
{
	int		index;
	int		tmpinter;
	int		tmpfinal;

	index = 0;
	while (index < size)
	{
		if (tab[index] == inter)
			tmpinter = index;
		if (tab[index] == final)
			tmpfinal = index;
		index++;
	}
	free(tab);
	if ((tmpinter < tmpfinal && tmpfinal - tmpinter <= size / 2)
		|| (tmpfinal < tmpinter && tmpinter - tmpfinal >= size / 2))
		return (1);
	else
		return (0);
}
