/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranco <jfranco@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:02:46 by jfranco           #+#    #+#             */
/*   Updated: 2024/10/16 11:19:28 by jfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)ptr;
	while (i < num)
	{
		p[i] = (unsigned char) value;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int	main()
{
	int i = 0;
	int j = 0;
	int arr[5];
	char c[10];
	char g[10];
	//memset(arr, 0, sizeof(arr));
	ft_memset(c, 'Z', sizeof(c));
	while (c[j] != '\0')
	{
		printf("%c", c[j]);
		j++;
	}
}
*/
