/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeplace <ldeplace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 12:31:23 by ldeplace          #+#    #+#             */
/*   Updated: 2026/01/09 12:31:23 by ldeplace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(int **a, int **b, int *size_a, int *size_b)
{
	int	i;

	if (*size_b == 0)
		return ;
	i = *size_a;
	while (i > 0)
	{
		(*a)[i] = (*a)[i - 1];
		i--;
	}
	(*a)[0] = (*b)[0];
	i = 0;
	while (i < *size_b - 1)
	{
		(*b)[i] = (*b)[i + 1];
		i++;
	}
	ft_printf("pa\n");
	(*size_a)++;
	(*size_b)--;
}

void	ft_pb(int **a, int **b, int *size_a, int *size_b)
{
	int	i;

	if (*size_a == 0)
		return ;
	i = *size_b;
	while (i > 0)
	{
		(*b)[i] = (*b)[i - 1];
		i--;
	}
	(*b)[0] = (*a)[0];
	i = 0;
	while (i < *size_a - 1)
	{
		(*a)[i] = (*a)[i + 1];
		i++;
	}
	ft_printf("pb\n");
	(*size_b)++;
	(*size_a)--;
}
