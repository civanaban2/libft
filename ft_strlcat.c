/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:18:07 by cari              #+#    #+#             */
/*   Updated: 2024/10/20 17:19:05 by cari             ###   ########.fr       */
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
