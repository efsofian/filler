/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:31:30 by seliasbe          #+#    #+#             */
/*   Updated: 2015/11/30 17:50:20 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)(s1));
	while (s1[i] != '\0')
	{
		j = i;
		k = 0;
		while (s1[j] == s2[k])
		{
			j++;
			k++;
			if (s2[k] == '\0')
				return (((char *)(&s1[i])));
		}
		i++;
	}
	return (NULL);
}
