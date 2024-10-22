/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urmet <urmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:17:52 by cari              #+#    #+#             */
/*   Updated: 2024/10/22 22:45:21 by urmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_strchr() function locates the first occurrence of c (converted to a char)
in the string pointed to by s. The terminating null character is considered
to be part of the string; therefore if c is ‘\0’, the functions locate the
terminating ‘\0’.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char) c)
		s++;
	if (*s == (char) c)
		return ((char *)s);
	return (0);
}
