/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarif <sarif@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:23:38 by sarif             #+#    #+#             */
/*   Updated: 2023/11/26 17:23:21 by sarif            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (i < (unsigned int)ft_strlen(s))
	{
		str[i] = f (i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
