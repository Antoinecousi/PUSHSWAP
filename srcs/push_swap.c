/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:48:16 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 23:02:08 by acousini         ###   ########.fr       */
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

int	ft_same(t_db *dbla, int *bubled, int size)
{
	int		i;
	t_lst	*a;

	i = 0;
	a = dbla->f;
	while (i < size)
	{
		if (a->a != bubled[i])
		{
			free(bubled);
			return (1);
		}
		a = a->next;
		i++;
	}
	free(bubled);
	return (0);
}

int	*ls_ar(t_db *dbl)
{
	int		i;
	int		*tab;
	t_lst	*a;

	i = 0;
	tab = malloc((sizeof(int) * ls_size(dbl)) + 8);
	if (!tab)
		exit(2);
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
	if (splited == NULL)
		exit(2);
	i = 0;
	while (str[i])
	{
		j = 0;
		splited[i] = malloc(sizeof(char) * (ft_strlen(str[i])) + 1);
		if (splited == NULL)
			exit(2);
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
	t_db	dbla;
	t_db	dblb;
	char	**splited;

	splited = NULL;
	ft_init_dblist(&dbla);
	ft_init_dblist(&dblb);
	if (argc < 2)
		return (0);
	else
		splited = array_str_copy(argv + 1, argc);
	if (ft_checker(splited))
		return (0);
	ft_fill_stack(splited, &dbla);
	if (!ft_same(&dbla, ft_buble(ls_ar(&dbla), ls_size(&dbla)), ls_size(&dbla)))
	{
		free(ft_buble(ls_ar(&dbla), ls_size(&dbla)));
		ffree(&dbla, &dblb);
		free_split(splited);
		return (0);
	}
	choose_sort_stack(&dbla, &dblb, argc - 1);
	ffree(&dbla, &dblb);
	free_split(splited);
	return (0);
}
