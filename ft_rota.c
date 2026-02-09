/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rota.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeplace <ldeplace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 12:31:15 by ldeplace          #+#    #+#             */
/*   Updated: 2026/01/09 12:31:15 by ldeplace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(int **a, int size)
{
	int	i;
	int	k;

	if (size < 2)
		return ;
	i = 0;
	k = (*a)[0];
	while (i < size - 1)
	{
		(*a)[i] = (*a)[i + 1];
		i++;
	}
	(*a)[size - 1] = k;
	ft_printf("ra\n");
}

void	ft_rb(int **b, int size)
{
	int	i;
	int	k;

	if (size < 2)
		return ;
	i = 0;
	k = (*b)[0];
	while (i < size - 1)
	{
		(*b)[i] = (*b)[i + 1];
		i++;
	}
	(*b)[size - 1] = k;
	ft_printf("rb\n");
}

void	ft_rr(int **a, int **b, int size_a, int size_b)
{
	int	i;
	int	k;

	if (size_a < 2)
		return ;
	if (size_b < 2)
		return ;
	i = 0;
	k = (*a)[0];
	while (i < size_a - 1)
	{
		(*a)[i] = (*a)[i + 1];
		i++;
	}
	(*a)[size_a - 1] = k;
	i = 0;
	k = (*b)[0];
	while (i < size_b - 1)
	{
		(*b)[i] = (*b)[i + 1];
		i++;
	}
	(*b)[size_b - 1] = k;
	ft_printf("rr\n");
}
