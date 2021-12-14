/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:00:57 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/12/08 20:00:58 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char		*c_little;
	char		*ret;
	size_t		i;

	if (!*little)
		return ((char *)big);
	c_little = (char *)little;
	i = 0;
	while (*big && *c_little && len != 0)
	{
		if (*big != *c_little++)
		{
			big -= i;
			len += i;
			c_little = (char *)little;
			i = 0;
		}
		else if (i++ == 0)
			ret = (char *)big;
		big++;
		len--;
	}
	if (i == ft_strlen((char *)little))
		return (ret);
	return (0);
}
