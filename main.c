/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeplace <ldeplace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:30:41 by ldeplace          #+#    #+#             */
/*   Updated: 2026/01/14 17:30:41 by ldeplace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	ft_is_sorted(int **a, int size)
{
	int	i;

	if (size <= 1)
		return (1);
	i = 0;
	while (i < size - 1)
	{
		if ((*a)[i] > (*a)[i + 1])
			return (0);
		i++;
	}
	return (1);
}

static char	*ft_join_params(int argc, char **argv)
{
	char	*tmp;
	char	*tmp1;
	int		i;

	i = 1;
	tmp1 = ft_strdup("");
	while (i < argc)
	{
		tmp = ft_strjoin(tmp1, " ");
		free(tmp1);
		tmp1 = tmp;
		tmp = ft_strjoin(tmp1, argv[i]);
		free(tmp1);
		tmp1 = tmp;
		i++;
	}
	return (tmp1);
}

int	main(int argc, char **argv)
{
	char	*tmp;
	char	**args;
	int		*a;
	int		size;

	size = 0;
	if (argc < 2)
		return (0);
	tmp = ft_join_params(argc, argv);
	args = ft_split(tmp, ' ');
	free(tmp);
	while (args[size])
		size++;
	a = ft_parse_to_int(args, size);
	ft_free_tab(args);
	if (!a)
		return (write(2, "Error\n", 6), 1);
	if (ft_is_sorted(&a, size))
	{
		free(a);
		return (0);
	}
	ft_index(&a, size);
	ft_tri(a, size);
	return (0);
}
