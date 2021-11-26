/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:29:21 by acousini          #+#    #+#             */
/*   Updated: 2021/11/26 03:09:08 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h> 
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct t_lst
{
	int				a;
	struct t_lst	*next;
	struct t_lst	*prev;
}				t_lst;

typedef struct t_db
{
	struct t_lst	*f;
	struct t_lst	*last;
}				t_db;

typedef struct t_cor
{
	int		fpos;
	int		lastpos;
	int		tot;
	int		totrr;
	int		distancetot;
}				t_cor;

typedef struct t_ccr
{
	int		med;
	int		total;
	int		f;
	int		posfirst;
	int		last;
	int		poslast;
	int		lowermed;
	int		uppermed;
	int		huitieme;
	int		sechuitieme;
	int		thihuitieme;
	int		fouhuitieme;
}				t_ccr;

void	move_five(t_db *dbla, t_db *dblb);
void	move_four(t_db *dbla, t_db *dblb);
int		is_not_a_number(char *str);
long	long_atoi(char *str);
int		ft_check_doublons(char **argv);
void	sort_more_one_hundred(t_db *dbla, t_db *dblb, t_ccr *coor);
void	sort_one_hundred(t_db *dbla, t_db *dblb, t_ccr *coor);
int		utils_sort_three(t_db *dbla, t_db *dblb);
void	a_bigger_than_b(t_db *dbla, t_db *dblb);
void	sort_three_numbers(t_db *dbla, t_db *dblb);
void	move_smallest_nbr_to_top(t_db *dbla, t_db *dblb, int size);
void	sort_one_to_five(t_db *dbla, t_db *dblb);
void	choose_sort_stack(t_db *dbla, t_db *dblb, t_ccr *coor);
int		ft_get_med_div_b(int *tab, int div_med, int size);
int		ft_splitterbdeux(t_db *dbla, t_db *dblb, int until, int div_med);
int		ft_get_med_div(int *tab, int div_med, int size);
int		*ft_tab_reducer(int lenght, int *tab);
int		ft_is_croissant(t_db *dbla);
int		ft_recursiveshit(t_ccr *coor, t_db *dbla, t_db *dblb);
int		ft_position(int *tab, int inter);
int		topOrBottomHard(int *tab, int inter, int final);
int		topOrBot(int *tab, int c);
int		ft_take_inter(int *tab, int inter, int final, int size);
int		ft_decoupage(t_ccr *coor, t_db *dbla, t_db *dblb, int size);
int		ft_splitterb(t_db *dbla, t_db *dblb, int until, int div_med);
int		ft_get_med_div_b(int *tab, int div_med, int size);
int		ft_splitter(t_db *dbla, t_db *dblb, int until, int div_med);
int		ft_get_huitieme(int *tab);
int		ft_get_secondhuitieme(int *tab);
int		ft_get_thirdhuitieme(int *tab);
int		ft_get_fourthhuitieme(int *tab);
int		ft_get_quarter(int *tab);
int		ft_get_thirdquarter(int *tab);
int		r_rr(int *tab, int c, int size);
int		ft_forwarda(t_db *dbla, t_db *dblb, int *bub);
int		ft_backwarda(t_db *dbla, t_db *dblb, int *bub);
int		ft_forwardb(t_db *dbla, t_db *dblb, int *bub);
int		ft_backwardb(t_db *dbla, t_db *dblb, int *bub);
int		ft_direction_after_inter(int *tab, int inter, int final, int size);
int		ft_inter_calcul_backward(int inter, int final, int size);
int		ft_inter_calcul_forward(int inter, int final, int size);
int		*ft_reverse_tab(int *tab, int size);
void	do_ra(t_db *dbla, t_db *dblb);
void	do_rra(t_db *dbla, t_db *dblb);
void	do_rb(t_db *dbla, t_db *dblb);
void	do_rrb(t_db *dbla, t_db *dblb);
void	do_pb(t_db *dbla, t_db *dblb);
void	do_pa(t_db *dbla, t_db *dblb);
void	do_rrr(t_db *dbla, t_db *dblb);
void	do_rr(t_db *dbla, t_db *dblb);
void	do_ss(t_db *dbla, t_db *dblb);
void	do_sa(t_db *dbla, t_db *dblb);
void	do_sb(t_db *dbla, t_db *dblb);
int		ft_next_lower_bis(int *tab);
int		nbr_inter_forward(int *tab, int *bubbled, int last, int totInter);
int		nbr_inter_backward(int *tab, int *bubbled, int last);
int		ft_intermed_lower(int *tab, int *bubbled);
int		size_array(int *tab, int size);
void	display_tab(int *tab, int size);
int		ft_get_tier(int *tab);
int		ft_next_lower(int *tab);
void	display_lists(t_db *dbla, t_db *dblb);
void	ft_do(t_db *dbla, t_db *dblb, t_ccr *coor);
int		is_sup(t_db *dbl);
int		*ls_ar(t_db *dbl);
void	ft_quatre_split(t_db *dbla, t_db *dblb);
int		ft_same(t_db *dbla, int *bubbled, int size);
int		ft_fill_stack(char **argv, t_db *dbla);
void	ft_fill_first_coor_alt(t_ccr *coor, int *tab);
void	ft_fill_first_coor(t_ccr *coor, t_db *dbl);
void	ft_init_first_coor(t_ccr *coor, int argc);
int		*ft_bubble(int *tab, int size);
t_ccr	ft_fill_coor(t_ccr coor, t_db *dbl);
t_ccr	ft_fill_coor_alt(t_ccr coor, int *tab);
int		ft_get_med(int *tab, int size);
int		ft_isnumber(char *argv);
int		ft_istoohigh(char *argv);
int		ft_error(int c);
int		ft_next_upper(int *tab);
void	init_ins(t_cor *ins);
int		ft_checker(char **argv);
void	ft_addbacklist(t_db *dbla, int val);
void	ft_addfrontlist(t_db *dbla, int val);
int		ls_size(t_db *dbl);
void	ft_init_dblist(t_db *dbla);
void	ft_sa(t_db *dbla);
void	ft_sb(t_db *dblb);
void	ft_ss(t_db *dbla, t_db *dblb);
void	ft_pa(t_db *dbla, t_db *dblb);
void	ft_pb(t_db *dbla, t_db *dblb);
void	ft_ra(t_db *dbla);
void	ft_rb(t_db *dbla);
void	ft_rr(t_db *dbla, t_db *dblb);
void	ft_rra(t_db *dbla);
void	ft_rrb(t_db *dbla);
void	ft_rrr(t_db *dbla, t_db *dblb);
int		*ft_reverse_bubble(int *tab, int size);

#endif
