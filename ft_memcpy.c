/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urmet <urmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:08:17 by cari              #+#    #+#             */
/*   Updated: 2024/10/22 22:16:07 by urmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_memcpy() function copies n bytes from memory area src to memory area dst.
If dst and src overlap, behavior is undefined.
Applications in which dst and src might overlap should use memmove(3) instead.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*tmp;

	if (!dst && !src)
		return (NULL);
	tmp = dst;
	while (n--)
		*(char *)dst++ = *(char *)src++;
	return (tmp);
}
