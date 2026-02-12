/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeplace <ldeplace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 12:30:49 by ldeplace          #+#    #+#             */
/*   Updated: 2026/01/09 12:30:49 by ldeplace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_tri_three(int **a, int size)
{
	int	first;
	int	second;
	int	third;

	third = (*a)[2];
	first = (*a)[0];
	second = (*a)[1];
	if (first > second && second < third && first < third)
		ft_sa(a, size);
	else if (first > second && second > third)
	{
		ft_sa(a, size);
		ft_rra(a, size);
	}
	else if (first > second && second < third && first > third)
		ft_ra(a, size);
	else if (first < second && second > third && first < third)
	{
		ft_sa(a, size);
		ft_ra(a, size);
	}
	else if (first < second && second > third && first > third)
		ft_rra(a, size);
}

static void	ft_ini(int *max, int *bit, int *i, int *size_a)
{
	*max = *size_a - 1;
	*bit = 0;
	*i = 0;
}

static void	ft_radix(int **a, int **b, int *size_a, int *size_b)
{
	int	max;
	int	bit;
	int	i;
	int	j;
	int	len;

	ft_ini(&max, &bit, &i, size_a);
	while ((max >> bit) != 0)
		bit++;
	while (i < bit)
	{
		len = *size_a;
		j = 0;
		while (j < len)
		{
			if ((((*a)[0]) >> i) & 1)
				ft_ra(a, *size_a);
			else
				ft_pb(a, b, size_a, size_b);
			j++;
		}
		while (*size_b > 0)
			ft_pa(a, b, size_a, size_b);
		i++;
	}
}

void	ft_tri(int *a, int size)
{
	int	*b;
	int	size_b;

	size_b = 0;
	if (size == 3)
	{
		ft_tri_three(&a, size);
		free(a);
		return ;
	}
	b = malloc(sizeof(int) * size);
	if (size == 5)
	{
		sort_five(&a, &b, &size, &size_b);
		free(a);
		free(b);
		return ;
	}
	ft_radix(&a, &b, &size, &size_b);
	free(b);
	free(a);
}
