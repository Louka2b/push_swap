/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeplace <ldeplace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 12:30:57 by ldeplace          #+#    #+#             */
/*   Updated: 2026/01/09 12:30:57 by ldeplace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(int **a, int size)
{
	int	tmp;

	if (size < 2)
		return ;
	tmp = (*a)[0];
	(*a)[0] = (*a)[1];
	(*a)[1] = tmp;
	write(1, "sa\n", 3);
}

void	ft_sb(int **b, int size)
{
	int	tmp;

	if (size < 2)
		return ;
	tmp = (*b)[0];
	(*b)[0] = (*b)[1];
	(*b)[1] = tmp;
	write(1, "sb\n", 3);
}

void	ft_ss(int **a, int **b, int size_a, int size_b)
{
	int	tmp;
	int	executed;

	executed = 0;
	if (size_a >= 2)
	{
		tmp = (*a)[0];
		(*a)[0] = (*a)[1];
		(*a)[1] = tmp;
		executed = 1;
	}
	if (size_b >= 2)
	{
		tmp = (*b)[0];
		(*b)[0] = (*b)[1];
		(*b)[1] = tmp;
		executed = 1;
	}
	if (executed)
		write(1, "ss\n", 3);
}
