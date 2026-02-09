/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: ldeplace <ldeplace@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2026/01/09 12:24:51 by ldeplace          #+#    #+#             */
/*   Updated: 2026/01/09 12:24:51 by ldeplace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

void	ft_sa(int **a, int size);
void	ft_sb(int **b, int size);
void	ft_ss(int **a, int **b, int size_a, int size_b);
void	ft_pb(int **a, int **b, int *size_a, int *size_b);
void	ft_pa(int **a, int **b, int *size_a, int *size_b);
void	ft_rr(int **a, int **b, int size_a, int size_b);
void	ft_rb(int **b, int size);
void	ft_ra(int **a, int size);
void	ft_rra(int **a, int size);
void	ft_rrb(int **b, int size);
void	sort_five(int **a, int **b, int size_a, int *size_b);
void	ft_rrr(int **a, int **b, int size_a, int size_b);
void	ft_index(int **a, int size);
void	ft_tri(int *a, int size);
void	ft_tri_three(int **a, int size);
int		*ft_parse_to_int(char **args, int size);
int		get_min(int *stack, int size, int target);
int		ft_is_sorted(int **a, int size);

#endif