/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarif <sarif@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:43:20 by sarif             #+#    #+#             */
/*   Updated: 2023/12/04 15:01:20 by sarif            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;
	size_t	i;

	i = count * size;
	if (size && i / size != count)
		return (NULL);
	s = malloc(count * size);
	if (!s)
		return (0);
	ft_bzero(s, count * size);
	return (s);
}
