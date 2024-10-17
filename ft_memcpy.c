/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranco <jfranco@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:01:46 by jfranco           #+#    #+#             */
/*   Updated: 2024/10/16 15:55:10 by jfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*sr;

	i = 0;
	dest = (unsigned char *)dst;
	sr = (const unsigned char *)src;
	while (i < n)
	{
		dest[i] = sr[i];
		i++;
	}
	return (dst);
}
