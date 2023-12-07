/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarif <sarif@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:31:53 by sarif             #+#    #+#             */
/*   Updated: 2023/11/18 16:50:14 by sarif            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		i;
	int		len;

	i = -1;
	len = ft_strlen((char *)s1);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	while (++i < len && s1[i])
		*(p + i) = s1[i];
	*(p + i) = 0;
	return (p);
}
