/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urmet <urmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:04:55 by urmet             #+#    #+#             */
/*   Updated: 2024/10/19 01:07:01 by urmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len || dstsize == 0)
		return (dstsize + src_len);
	dst += dst_len;
	while (dstsize-- - dst_len > 1 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (dst_len + src_len);
}
