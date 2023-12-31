/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarif <sarif@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:45:35 by sarif             #+#    #+#             */
/*   Updated: 2023/11/30 13:26:43 by sarif            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *str, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			counter++;
		while (str[i] != c && str[i])
			i++;
	}
	return (counter);
}

static void	*ft_freestr(char **str, int j)
{
	while (j >= 0)
	{
		free(str[j]);
		j--;
	}
	return (free(str), str = NULL, NULL);
}

static char	**ft_allocstr(char **strings, char const *s, char c)
{
	int		count;
	int		j;
	int		i;

	count = ft_countword(s, c);
	j = 0;
	while (j < count)
	{
		while (*s == c)
			s++;
		i = 0;
		while (s[i] != c && s[i] != '\0')
			i++;
		strings[j] = (char *)ft_calloc((i + 1), sizeof (char));
		if (!strings[j])
			return (ft_freestr(strings, j));
		ft_strlcpy(strings[j], (s), (i + 1));
		j++;
		s = s + i;
	}
	strings[j] = NULL;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		count;

	if (!s)
		return (NULL);
	count = ft_countword(s, c);
	strings = (char **)ft_calloc((count + 1), sizeof(char *));
	if (!strings)
		return (0);
	return (ft_allocstr(strings, s, c));
}
