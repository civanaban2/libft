/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:08:17 by cari              #+#    #+#             */
/*   Updated: 2024/10/15 22:29:02 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*str1;
	const char	*str2;

	if (!dst && !src)
		return (NULL);
	str1 = dst;
	str2 = src;
	while (n--)
		*str1++ = *str2++;
	return (dst);
}

int main(int argc, char const *argv[])
{
	char str1[50] = "Hello World!";
	char str2[50] = "Goodbye World!";

	ft_memcpy(str1, str2, 5555);
	printf("%s\n", str1);
	
	return 0;
}
