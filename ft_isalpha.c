/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urmet <urmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:39:17 by cari              #+#    #+#             */
/*   Updated: 2024/10/22 22:37:25 by urmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_isalpha() function tests for any character for which isupper(3) or
islower(3) is true.  The value of the argument must be representable as an
unsigned char or the value of EOF.
*/

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
