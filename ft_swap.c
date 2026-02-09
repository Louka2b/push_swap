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
	int	i;

	if (size < 2)
		return ;
	i = (*a)[0];
	(*a)[0] = (*a[1]);
	(*a)[1] = i;
	write(1, "sa\n", 3);
}

void	ft_sb(int **b, int size)
{
	int	i;

	if (size < 2)
		return ;
	i = (*b)[0];
	(*b)[0] = (*b[1]);
	(*b)[1] = i;
	write(1, "sb\n", 3);
}

void	ft_ss(int **a, int **b, int size_a, int size_b)
{
	int	i;

	if (size_b < 2 || size_a < 0)
		return ;
	i = (*b)[0];
	(*b)[0] = (*b[1]);
	(*b)[1] = i;
	i = (*a)[0];
	(*a)[0] = (*a[1]);
	(*a)[1] = i;
	write(1, "ss\n", 3);
}
