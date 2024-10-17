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

#include <stdlib.h>
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	total;
	void	*call;

	i = 0;
	total = size * count;
	call = malloc(total);
	if (call == NULL)
		return (NULL);
	ft_bzero(call, total);
	return (call);
}
/*
#include <stdio.h>
int main()
{
	int i;
	char *y;

	i = 0;
	y = ft_calloc(20, sizeof(char));
	while (i < 20)
	{
		printf("%d", y[i]);
		i++;
	}
}
*/
