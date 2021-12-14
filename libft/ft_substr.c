/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:00:35 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/12/08 20:00:35 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (s_len < start || !len)
		return (ft_strdup(""));
	if (s_len < len)
		len = s_len;
	ret = malloc(++len);
	if (!ret)
		return (0);
	ft_strlcpy(ret, s + start, len);
	return (ret);
}
