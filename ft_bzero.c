/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urmet <urmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:44:33 by cari              #+#    #+#             */
/*   Updated: 2024/10/22 22:35:56 by urmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_bzero() function writes n zeroed bytes to the string s.  If n is zero,
ft_bzero() does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
