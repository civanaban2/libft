/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urmet <urmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:17:40 by cari              #+#    #+#             */
/*   Updated: 2024/11/04 20:32:05 by urmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tmp;

	tmp = dst;
	if (dst < src && len != 0)
	{
		while (len--)
			*(char *)dst++ = *(char *)src++;
	}
	else if (dst > src && len != 0)
	{
		dst += len;
		src += len;
		while (len--)
			*(char *)--dst = *(char *)--src;
	}
	return (tmp);
}
