/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranco <jfranco@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:25:52 by jfranco           #+#    #+#             */
/*   Updated: 2024/10/17 12:32:24 by jfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*dst;

	i = 0;
	l = 0;
	if (s == NULL)
		return (NULL);
	dst = (char *) malloc((len + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	while (l < len && l < ft_strlen(s))
	{
		dst[l] = s[start + l];
		l++;
	}
	dst[l] = '\0';
	return (dst);
}
