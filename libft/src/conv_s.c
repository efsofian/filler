/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 21:47:48 by seliasbe          #+#    #+#             */
/*   Updated: 2017/05/27 02:23:50 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	flags_zero(t_printf *env, int i)
{
	int	a;

	if (env->width > env->precision && env->precision)
	{
		if (env->precision > i)
		{
			env->precision = i;
		}
		a = env->width;
		while (a > env->precision)
		{
			ft_putchar('0');
			i++;
			a--;
		}
	}
	else if (env->width > i && !env->precision)
	{
		while (i < env->width)
		{
			ft_putchar('0');
			i++;
		}
	}
	return (i);
}

static int	flags_again_norme(t_printf *env, int i)
{
	int	a;

	if (env->precision > i)
	{
		env->precision = i;
	}
	a = env->width;
	while (a-- > env->precision)
	{
		ft_putchar(' ');
		i++;
	}
	return (i);
}

static int	flags_again(t_printf *env, int i)
{
	if (env->width > env->precision && env->precision)
		i = flags_again_norme(env, i);
	else if (env->width > i && !env->precision)
	{
		while (i < env->width)
		{
			ft_putchar(' ');
			i++;
		}
	}
	else if (env->width < env->precision)
	{
		if (i < env->width && i < env->precision)
			while (i < env->width)
			{
				ft_putchar(' ');
				i++;
			}
	}
	return (i);
}

static void	flags(t_printf *env, int i, char *s)
{
	if (env->moins)
	{
		if (env->precision && !env->punct)
			i = ft_putnstr(s, env, i);
		else if (!env->punct)
			ft_putstr(s);
	}
	if (!env->zero || env->moins)
		i = flags_again(env, i);
	if (env->zero && !env->moins)
		i = flags_zero(env, i);
	if (!env->moins)
	{
		if (env->precision && !env->punct)
			i = ft_putnstr(s, env, i);
		else if (!env->punct)
			ft_putstr(s);
	}
	if (env->width > env->precision && env->width > i)
		env->ret = env->ret + env->width;
	else
		env->ret = env->ret + i;
}

void		conv_s(t_printf *env)
{
	char	*s;
	int		i;

	if (!(s = ft_strdup(va_arg(env->ap, char *))))
		s = ft_strdup("(null)");
	if (s[0] == '\0')
		i = 0;
	else
		i = ft_strlen(s);
	if (env->precision < 0)
	{
		env->punct = 0;
		env->precision = 0;
	}
	if (env->punct == 1)
	{
		if (env->width && env->zero)
			ft_putchar_nb('0', env->width);
		else if (env->width && !env->zero)
			ft_putchar_nb(' ', env->width);
		env->ret += env->width;
		return ;
	}
	flags(env, i, s);
	free(s);
}
