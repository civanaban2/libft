/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urmet <urmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:20:45 by urmet             #+#    #+#             */
/*   Updated: 2024/10/19 16:34:49 by urmet            ###   ########.fr       */
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
