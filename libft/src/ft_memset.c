/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:26:22 by seliasbe          #+#    #+#             */
/*   Updated: 2015/11/28 16:04:59 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	count;
	char	l;

	l = (unsigned char)c;
	count = 0;
	while (count < len)
	{
		((char*)b)[count] = l;
		count++;
	}
	return (b);
}
