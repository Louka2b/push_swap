/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeplace <ldeplace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:16:00 by ldeplace          #+#    #+#             */
/*   Updated: 2026/02/12 15:19:18 by ldeplace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_min_val(int *stack, int size)
{
	int	min;
	int	i;

	min = stack[0];
	i = 1;
	while (i < size)
	{
		if (stack[i] < min)
			min = stack[i];
		i++;
	}
	return (min);
}

static void	move_to_top(int **a, int size, int val)
{
	int	pos;

	pos = 0;
	while (pos < size && (*a)[pos] != val)
		pos++;
	if (pos <= size / 2)
	{
		while ((*a)[0] != val)
			ft_ra(a, size);
	}
	else
	{
		while ((*a)[0] != val)
			ft_rra(a, size);
	}
}

void	sort_five(int **a, int **b, int *size_a, int *size_b)
{
	int	min;

	while (*size_a > 3)
	{
		min = get_min_val(*a, *size_a);
		move_to_top(a, *size_a, min);
		ft_pb(a, b, size_a, size_b);
	}
	ft_tri_three(a, *size_a);
	while (*size_b > 0)
		ft_pa(a, b, size_a, size_b);
}
