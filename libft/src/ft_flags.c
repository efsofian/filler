/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 04:27:19 by seliasbe          #+#    #+#             */
/*   Updated: 2017/05/27 02:24:40 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	flag_diese(char *format, t_printf *env)
{
	if (format[env->i] == '#' && format[env->i + 1] == '\0')
		env->fail = 1;
	else if (format[env->i] == '#')
		env->diese = 1;
}

void	flag_moins(char *format, t_printf *env)
{
	if (format[env->i] == '-' && format[env->i + 1] == '\0')
		env->fail = 1;
	else if (format[env->i] == '-')
		env->moins = 1;
}

void	flag_plus(char *format, t_printf *env)
{
	if (format[env->i] == '+' && format[env->i + 1] == '\0')
		env->fail = 1;
	else if (format[env->i] == '+')
		env->plus = 1;
}

void	flag_space(char *format, t_printf *env)
{
	if (format[env->i] == ' ' && format[env->i + 1] == '\0')
		env->fail = 1;
	else if (format[env->i] == ' ')
		env->space = 1;
}

void	flag_zero(char *format, t_printf *env)
{
	if (format[env->i] == '0' && format[env->i + 1] == '\0')
		env->fail = 1;
	else if (format[env->i] == '0')
		env->zero = 1;
}
