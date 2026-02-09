/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrota.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeplace <ldeplace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 12:31:05 by ldeplace          #+#    #+#             */
/*   Updated: 2026/01/09 12:31:05 by ldeplace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(int **a, int size)
{
	int	i;
	int	k;

	if (size < 2)
		return ;
	i = size - 1;
	k = (*a)[size - 1];
	while (i > 0)
	{
		(*a)[i] = (*a)[i - 1];
		i--;
	}
	(*a)[0] = k;
	ft_printf("rra\n");
}

void	ft_rrb(int **b, int size)
{
	int	i;
	int	k;

	if (size < 2)
		return ;
	i = size - 1;
	k = (*b)[size - 1];
	while (i > 0)
	{
		(*b)[i] = (*b)[i - 1];
		i--;
	}
	(*b)[0] = k;
	ft_printf("rrb\n");
}

void	ft_rrr(int **a, int **b, int size_a, int size_b)
{
	int	i;
	int	k;

	if (size_a < 2)
		return ;
	if (size_b < 2)
		return ;
	i = size_a - 1;
	k = (*a)[size_a - 1];
	while (i > 0)
	{
		(*a)[i] = (*a)[i - 1];
		i--;
	}
	(*a)[0] = k;
	i = size_b - 1;
	k = (*b)[size_b - 1];
	while (i > 0)
	{
		(*b)[i] = (*b)[i - 1];
		i--;
	}
	(*b)[0] = k;
	ft_printf("rrr\n");
}
