/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarif <sarif@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 09:16:08 by sarif             #+#    #+#             */
/*   Updated: 2023/11/26 17:24:09 by sarif            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;

	if (!set)
		return ((char *)s1);
	if (!s1)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
	{
		i++;
	}
	if (i == len)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[len]))
	{
		len--;
	}
	return (ft_substr(s1, i, (len - i + 1)));
}
