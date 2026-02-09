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

static void	ft_sort_more(int **a, int size, int f, int s)
{
	int	t;

	t = (*a)[2];
	if (f > s && s > t)
	{
		ft_sa(a, size);
		ft_rra(a, size);
	}
	else if (f < s && s > t && f < t)
	{
		ft_sa(a, size);
		ft_ra(a, size);
	}
}

static void	ft_tri_three(int **a, int size)
{
	int	f;
	int	s;

	if (size < 2 || ft_is_sorted(a, size))
		return ;
	if (size == 2)
		return (ft_sa(a, size));
	f = (*a)[0];
	s = (*a)[1];
	if (f > s && s < (*a)[2] && f < (*a)[2])
		ft_sa(a, size);
	else if (f > s && s < (*a)[2] && f > (*a)[2])
		ft_ra(a, size);
	else if (f < s && s > (*a)[2] && f > (*a)[2])
		ft_rra(a, size);
	else
		ft_sort_more(a, size, f, s);
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
	if (size == 2 && a[0] > a[1])
	{
		ft_sa(&a, size);
		return ;
	}
	if (size == 3)
	{
		ft_tri_three(&a, size);
		return ;
	}
	b = malloc(sizeof(int) * size);
	ft_radix(&a, &b, &size, &size_b);
	free(b);
	free(a);
}
