/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:27:27 by ldeplace          #+#    #+#             */
/*   Updated: 2025/11/17 20:54:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The ft_strlen() function returns the length of a string, which is
 *  the number of characters up to the first null terminating character.
 *  This is smaller than the amount of memory that is reserved for the string, 
 * which can be measured using the sizeof operator instead.
 * 
 * @param str Required. A string to measure the length of.

 * @return size_t An integer representing the length of the string.

 */
size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
