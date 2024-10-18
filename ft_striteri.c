/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranco <jfranco@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:56:53 by jfranco           #+#    #+#             */
/*   Updated: 2024/10/18 17:06:08 by jfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i,&s[i]);
		i++;
	}
}
