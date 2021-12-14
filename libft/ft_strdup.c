/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:01:56 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/12/08 20:01:57 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*ret;

	len = ft_strlen(s);
	ret = malloc(len + 1);
	if (!ret)
		return (0);
	ft_strlcpy(ret, s, len + 1);
	return (ret);
}
