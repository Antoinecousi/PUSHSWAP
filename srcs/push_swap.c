/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:48:16 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 17:05:02 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	size_array(int *tab, int size)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (size);
}

int	ft_same(t_db *dbla, int *bubbled, int size)
{
	int		i;
	t_lst	*a;

	i = 0;
	a = dbla->f;
	while (i < size)
	{
		if (a->a != bubbled[i])
			return (1);
		a = a->next;
		i++;
	}
	free(bubbled);
	return (0);
}

int	*ls_ar(t_db *dbl)
{
	int		i;
	int		*tab;
	t_lst	*a;

	i = 0;
	tab = malloc((sizeof(int *) * ls_size(dbl)) + 8);
	a = dbl->f;
	while (a != NULL)
	{
		tab[i] = a->a;
		i++;
		a = a->next;
	}
	tab[i] = '\0';
	return (tab);
}

char	**array_str_copy(char **str, int size)
{
	int		i;
	int		j;
	char	**splited;

	splited = malloc(sizeof(char *) * size);
	i = 0;
	while (str[i])
	{
		j = 0;
		splited[i] = malloc(sizeof(char) * (ft_strlen(str[i])) + 1);
		while (str[i][j])
		{
			splited[i][j] = str[i][j];
			j++;
		}
		splited[i][j] = '\0';
		i++;
	}
	splited[i] = NULL;
	return (splited);
}

int	main(int argc, char **argv)
{
	t_ccr	coor;
	t_db	*dbla;
	t_db	*dblb;
	char	**splited;

	splited = NULL;
	dbla = malloc(sizeof(t_db));
	dblb = malloc(sizeof(t_db));
	ft_init_dblist(dbla);
	ft_init_dblist(dblb);
	if (argc < 2)
		return (0);
	else
		splited = array_str_copy(argv + 1, argc);
	if (ft_checker(splited))
		return (0);
	ft_fill_stack(splited, dbla);
	if (!ft_same(dbla, ft_bubble(ls_ar(dbla), ls_size(dbla)), ls_size(dbla)))
		return (0);
	ft_fill_first_coor(&coor, dbla);
	choose_sort_stack(dbla, dblb, &coor);
	ffree(dbla, dblb);
	free_split(splited);
	return (0);
}
