/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urmet <urmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:48:53 by urmet             #+#    #+#             */
/*   Updated: 2024/11/02 17:29:04 by urmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(int n);

char	*ft_itoa(int n)
{
	int		sign;
	int		len;
	char	*str;

	sign = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_digits(n);
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (len >= 0 && !(sign == -1 && len == 0))
	{
		str[len--] = (n % 10) + '0';
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

static int	ft_digits(int n)
{
	int	digits;

	digits = 1;
	if (n < 0)
		digits++;
	while (n / 10)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}
