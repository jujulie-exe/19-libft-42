/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranco <jfranco@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:12:16 by jfranco           #+#    #+#             */
/*   Updated: 2024/10/15 18:23:02 by jfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*call;

	if (size && count > SIZE_MAX / count)
		return (NULL);
	total = size * count;
	call = malloc(total);
	if (call == NULL)
		return (NULL);
	ft_bzero(call, total);
	return (call);
}
