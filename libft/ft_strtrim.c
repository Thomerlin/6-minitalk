/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:00:42 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/12/08 20:00:43 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_start;
	char	*str_end;
	char	*str;
	int		len;

	if (!s1 || !set)
		return (ft_strdup(""));
	str_start = (char *)s1;
	str_end = str_start + ft_strlen(s1) - 1;
	while (*str_start && ft_strchr(set, *str_start))
		str_start++;
	while (str_end > str_start && ft_strchr(set, *str_end))
		str_end--;
	len = str_end - str_start + 2;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (0);
	ft_strlcpy(str, str_start, len);
	return (str);
}
