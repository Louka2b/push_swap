/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeplace <ldeplace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 12:31:32 by ldeplace          #+#    #+#             */
/*   Updated: 2026/01/09 12:31:32 by ldeplace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_num(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int	ft_check_overflow(char *str)
{
	long	res;
	int		sign;
	int		i;

	res = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		if ((res * sign) > INT_MAX || (res * sign) < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

static int	ft_has_duplicate(int *a, int pos)
{
	int	j;

	j = 0;
	while (j < pos)
	{
		if (a[j] == a[pos])
			return (1);
		j++;
	}
	return (0);
}

int	*ft_parse_to_int(char **args, int size)
{
	int	*a;
	int	i;

	a = malloc(sizeof(int) * size);
	if (!a)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (!ft_check_num(args[i]))
			return (free(a), NULL);
		if (!ft_check_overflow(args[i]))
			return (free(a), NULL);
		a[i] = ft_atoi(args[i]);
		if (ft_has_duplicate(a, i))
			return (free(a), NULL);
		i++;
	}
	return (a);
}
