/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:24:52 by seliasbe          #+#    #+#             */
/*   Updated: 2015/12/01 18:12:40 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	size_t	i;

	if (s != NULL && f != NULL)
	{
		i = 0;
		while (i < ft_strlen(s))
		{
			f(&s[i]);
			i++;
		}
	}
}
