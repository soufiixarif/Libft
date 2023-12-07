/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarif <sarif@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:52:07 by sarif             #+#    #+#             */
/*   Updated: 2023/11/23 21:52:10 by sarif            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	d;
	size_t	s;

	slen = ft_strlen(src);
	if (!dst && !dstsize)
		return (slen);
	d = ft_strlen(dst);
	dlen = d;
	if (dstsize < dlen)
		return (dstsize + slen);
	s = 0;
	while (src[s] && dlen + 1 < (dstsize))
		dst[dlen++] = src[s++];
	dst[dlen] = '\0';
	return (d + slen);
}
