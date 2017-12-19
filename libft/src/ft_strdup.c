/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:03:50 by seliasbe          #+#    #+#             */
/*   Updated: 2015/12/02 10:06:35 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char *dest;

	dest = (char*)malloc(sizeof(s) * (ft_strlen(s) + 1));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, s);
	return (dest);
}
