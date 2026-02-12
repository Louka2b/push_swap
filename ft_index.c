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
	int i;
	int j;
	int count;
	int *tmp_tab;

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
	int i;

	i = 0;
	while (i < size)
	{
		if (stack[i] == target)
			return (i);
		i++;
	}
	return (0);
}


