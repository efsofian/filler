/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_ws.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 22:59:59 by seliasbe          #+#    #+#             */
/*   Updated: 2017/05/27 02:24:03 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	norme(char *stock, t_printf *env)
{
	int	size;

	env->size = ft_strlen(stock);
	if (env->moins)
		ft_putstr(stock);
	if (env->width > env->size)
	{
		size = env->width - env->size;
		if (env->zero)
			ft_putchar_nb('0', size);
		else
			ft_putchar_nb(' ', size);
	}
	if (!env->moins)
		ft_putstr(stock);
	if (env->width > env->size)
		env->size = env->width;
	env->ret += env->size;
	ft_strdel(&stock);
}

static void	conv(wchar_t *ws, t_printf *env)
{
	int				i;
	unsigned int	size;
	char			**bin;
	char			*tmp;
	char			*stock;

	i = 0;
	if (!ws)
		stock = ft_strdup("(null)");
	else
		stock = ft_strnew(0);
	while (ws && ws[i] && !env->punct)
	{
		size = (unsigned int)ws[i];
		tmp = ft_itoa_base_unsigned(size, 2);
		bin = mask_unicode(tmp);
		size = 0;
		while (bin[size++])
			env->size++;
		if (env->size > env->precision && env->precision)
			break ;
		stock = ft_freejoin(stock, stockbis(bin, size));
		i++;
	}
	norme(stock, env);
}

void		conv_ws(t_printf *env, char *format)
{
	wchar_t	*ws;
	int		i;

	i = 0;
	if (format[env->i] == 'S' || env->l == 1)
	{
		ws = va_arg(env->ap, wchar_t *);
		conv(ws, env);
	}
	else
		conv_s(env);
}
