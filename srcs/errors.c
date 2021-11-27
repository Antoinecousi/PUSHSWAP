/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:41:52 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 23:10:35 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long	long_atoi(char *str)
{
	long	atoi;
	long	neg;
	int		i;

	i = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	atoi = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi *= 10;
		atoi += str[i] - 48;
		i++;
	}
	return (atoi * neg);
}

int	ft_check_doublons(char **argv)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	j = 0;
	while (argv[i])
	{
		tmp = long_atoi(argv[i]);
		j = i + 1;
		while (argv[j])
		{
			if (tmp == long_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_not_a_number(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
		j++;
	}
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] != '\0' || j > 10)
		return (1);
	return (0);
}

int	ft_isnumber(char *argv)
{
	while (*argv)
	{
		if (*argv < 0 || *argv > 9)
			return (1);
		argv++;
	}
	return (0);
}

int	ft_error(char **splited, int c)
{
	write(1, "Error\n", 6);
	free_split(splited);
	return (c);
}
