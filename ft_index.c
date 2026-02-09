/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: ldeplace <ldeplace@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2026/01/09 12:31:38 by ldeplace          #+#    #+#             */
/*   Updated: 2026/01/09 12:31:38 by ldeplace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_index(int **a, int size)
{
	int	i;
	int	j;
	int	count;
	int	*tmp_tab;

	tmp_tab = malloc(sizeof(int) * size);
	if (!tmp_tab)
		return ;
	i = -1;
	while (++i < size)
	{
		count = 0;
		j = -1;
		while (++j < size)
		{
			if ((*a)[j] < (*a)[i])
				count++;
		}
		tmp_tab[i] = count;
	}
	i = -1;
	while (++i < size)
		(*a)[i] = tmp_tab[i];
	free(tmp_tab);
}

int	get_min(int *stack, int size, int target)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (stack[i] == target)
			return (i);
		i++;
	}
	return (0);
}

static int	*first_val(int **a, int **b, int value, int *size)
{
	int	position;
	int	i;

	position = 0;
	i = 0;
	while (i < size[0] && (*a)[i] != value)
	{
		i++;
		position++;
	}
	while ((*a)[0] != value)
	{
		if (position <= 2)
			ft_ra(a, size[0]);
		else
			ft_rra(a, size[0]);
	}
	ft_pb(a, b, &size[0], &size[1]);
	return (size);
}

void	sort_five(int **a, int **b, int size_a, int *size_b)
{
	int	*size;

	size = (int *)malloc(2 * sizeof(int));
	size[0] = size_a;
	size[1] = *size_b;
	size = first_val(a, b, 0, size);
	size = first_val(a, b, 1, size);
	size_a = size[0];
	*size_b = size[1];
	ft_tri_three(a, size_a);
	ft_pa(a, b, &size_a, size_b);
	ft_pa(a, b, &size_a, size_b);
	free(size);
}
