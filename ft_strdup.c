/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urmet <urmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:25:18 by cari              #+#    #+#             */
/*   Updated: 2024/10/22 22:44:56 by urmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_strdup() function allocates sufficient memory for a copy of the string s1,
does the copy, and returns a pointer to it. The pointer may subsequently be used
as an argument to the function free(3).
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = malloc(ft_strlen(s1) +1);
	if (!str)
		return (0);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	return (str);
}
