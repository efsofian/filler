/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:25:25 by seliasbe          #+#    #+#             */
/*   Updated: 2015/12/01 18:13:13 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s != NULL && f != NULL)
	{
		i = 0;
		while (i < ft_strlen(s))
		{
			f(i, &s[i]);
			i++;
		}
	}
}
