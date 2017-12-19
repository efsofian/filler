/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 19:36:24 by seliasbe          #+#    #+#             */
/*   Updated: 2017/05/27 02:24:34 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_conv(char *format, t_printf *env)
{
	if (format[env->i] == 'd' || format[env->i] == 'i' || \
		format[env->i] == 'D')
		conv_d(format, env);
	else if (format[env->i] == 'c' || format[env->i] == 'C')
		conv_c(env, format);
	else if (format[env->i] == 's' || format[env->i] == 'S')
		conv_ws(env, format);
	else if (format[env->i] == '%')
		conv_pourcent(env);
	else if (format[env->i] == 'u' || format[env->i] == 'U')
		conv_u(env, format);
	else if (format[env->i] == 'x' || format[env->i] == 'X')
		conv_x(env, format);
	else if (format[env->i] == 'o' || format[env->i] == 'O')
		conv_o(env, format);
	else if (format[env->i] == 'p')
		conv_p(env);
	else if (env->fail != 1)
		wrong_conv(format, env);
}
