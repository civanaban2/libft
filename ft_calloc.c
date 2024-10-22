/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urmet <urmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:17:04 by cari              #+#    #+#             */
/*   Updated: 2024/10/22 22:41:39 by urmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_calloc() function contiguously allocates enough space for count objects
that are size bytes of memory each and returns a pointer to the allocated memory.
The allocated memory is filled with bytes of value zero.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	return (ft_memset(ptr, 0, count * size));
}
