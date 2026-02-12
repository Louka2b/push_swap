/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeplace <ldeplace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:54:45 by ldeplace          #+#    #+#             */
/*   Updated: 2026/02/12 14:59:33 by ldeplace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_min(int *stack, int size, int target)
{
	int	min;
	int	i;

	if (size <= 0)
		return (0);
	min = stack[0];
	i = 0;
	while (i < size)
	{
		if (stack[i] < min && stack[i] != target)
			min = stack[i];
		i++;
	}
	return (min);
}

static void	move_to_top(int **stack, int size, int value)
{
	int	position;

	while ((*stack)[0] != value)
	{
		position = 0;
		while (position < size && (*stack)[position] != value)
			position++;
		if (position <= size / 2)
			ft_ra(stack, size);
		else
			ft_rra(stack, size);
	}
}



void	sort_five(int **a, int **b, int size_a, int *size_b)
{
	int	*size;
	int	min1;
	int	min2;

	size = malloc(2 * sizeof(int));
	size[0] = size_a;
	size[1] = *size_b;
	min1 = get_min(*a, size[0], -1);
	min2 = get_min(*a, size[0], min1);
	move_to_top(a, size[0], min1);
	ft_pb(a, b, &size[0], &size[1]);
	move_to_top(a, size[0], min2);
	ft_pb(a, b, &size[0], &size[1]);
	ft_tri_three(a, size[0]);
	ft_pa(a, b, &size[0], &size[1]);
	ft_pa(a, b, &size[0], &size[1]);
	free(size);
}

