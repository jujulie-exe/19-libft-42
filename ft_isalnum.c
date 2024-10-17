/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranco <jfranco@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:34:14 by jfranco           #+#    #+#             */
/*   Updated: 2024/10/16 11:18:40 by jfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return (1);
	}
	else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}