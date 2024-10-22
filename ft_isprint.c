/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urmet <urmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:46:32 by cari              #+#    #+#             */
/*   Updated: 2024/10/22 22:40:04 by urmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_isprint() function tests for any printing character, including
space (‘ ’). The value of the argument must be representable as an unsigned
char or the value of EOF.
*/
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
