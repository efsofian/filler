/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:34:46 by seliasbe          #+#    #+#             */
/*   Updated: 2015/12/01 18:10:35 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i]
			&& (((unsigned char*)s1)[i] == ((unsigned char*)s2)[i]))
		i++;
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
