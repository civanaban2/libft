/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urmet <urmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 02:40:19 by urmet             #+#    #+#             */
/*   Updated: 2024/10/19 02:54:13 by urmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = 0;
	while (*s)
	{
		if (*s == (char) c)
			last = (char *)s;
		s++;
	}
	if (*s == (char) c)
		return ((char *)s);
	if (last)
		return (last);
	return (0);
}
