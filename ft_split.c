/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranco <jfranco@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:55:48 by jfranco           #+#    #+#             */
/*   Updated: 2024/10/18 13:14:23 by jfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wrd_count(const char *c, char s)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (c[i] != '\0')
	{
		if (c[i] != s && (i == 0 || c[i - 1] == s))
			count++;
		i++;
	}
	return (count);
}

char	*wrd_dup(const char *c, size_t start, size_t end)
{
	size_t	i;
	char	*wrd;

	i = 0;
	wrd = (char *)malloc((end - start + 1) * sizeof(char));
	while (start < end)
	{
		wrd[i] = c[start];
		i++;
		start++;
	}
	wrd[i] = '\0';
	return (wrd);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	size_t	j;
	size_t	q;
	size_t	start;

	/*if (s == NULL)
		return (NULL);*/
	j = 0;
	q = 0;
	dst = (char **)malloc((wrd_count(s, c) + 1) * sizeof(char *));
	if (dst == NULL)
		return (NULL);
	while (s[j] != '\0')
	{
		if (s[j] != c)
		{
			start = j;
			while (s[j] != '\0' && s[j] != c)
				j++;
			dst[q++] = wrd_dup(s, start, j);
		}
		else
			j++;
	}
	dst[q] = NULL;
	return (dst);
}
