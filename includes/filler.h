/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 01:31:25 by seliasbe          #+#    #+#             */
/*   Updated: 2017/05/28 08:52:29 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "../libft/includes/libft.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_env
{
	char	player;
	char	**map;
	char	**piece;
	int		size_mapx;
	int		size_mapy;
	int		size_piecex;
	int		size_piecey;
	int		found;
	int		x;
	int		y;
	int		range;
}				t_env;

int				load_player(t_env *env);
int				load_map(t_env *env);
int				load_sizemap(t_env *env);
int				load_piece(t_env *env);
int				load_sizepiece(t_env *env);
t_env			*ft_init_env(void);

int				play(t_env *env);
void			free_piece(t_env *env);
void			free_map (t_env *env);

#endif
