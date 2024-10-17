/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranco <jfranco@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:54:21 by jfranco           #+#    #+#             */
/*   Updated: 2024/10/16 17:09:54 by jfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	y;
	size_t	lens;

	y = 0;
	i = ft_strlen(dst);
	lens = ft_strlen(src);
	if (dstsize <= i)
	{
		return (dstsize + lens);
	}
	while (src[y] != '\0' && (i + y) < dstsize - 1)
	{
		dst[i + y] = src[y];
		y++;
	}
	dst[i + y] = '\0';
	return (i + lens);
}