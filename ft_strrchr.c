/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranco <jfranco@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:48:42 by jfranco           #+#    #+#             */
/*   Updated: 2024/10/17 10:19:06 by jfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*value;

	i = 0;
	value = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			value = ((char *)&s[i]);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (value);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	printf("%s\n",ft_strrchr("cazzo", '\0'));
	printf("%s\n",strrchr("cazzo", '\0'));
}
*/
