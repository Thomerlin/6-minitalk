/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:06:17 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/12/08 20:06:18 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int			i;

	i = 0;
	while (n / 10)
	{
		++i;
		n = n / 10;
	}
	++i;
	return (i);
}

static int	negative_numbers(int num)
{
	if (num < 0)
	{
		num = num * -1;
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char		*ret;
	int			i;
	int			sign;
	long int	num;

	num = n;
	sign = negative_numbers(num);
	if (sign)
		num = num * -1;
	i = count_digits(num) + sign;
	ret = malloc(sizeof(char) * i + 1);
	if (!ret)
		return (0);
	ret[i] = 0;
	while (num >= 10)
	{
		ret[--i] = (num % 10) + '0';
		num = num / 10;
	}
	ret[--i] = num + '0';
	if (sign > 0)
		ret[0] = '-';
	return (ret);
}
