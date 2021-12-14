/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:00:48 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/12/08 20:00:49 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*start;

	str = (char *)s;
	start = 0;
	while (*str)
	{
		if (*str == (char)c)
			start = str;
		++str;
	}
	if (c == 0)
		start = str;
	return (start);
}
