/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 16:26:19 by varichar          #+#    #+#             */
/*   Updated: 2017/03/13 22:31:30 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <fcntl.h>
# include <math.h>
# include "libft.h"
# include "mlx.h"

# define WIN_X 1000
# define WIN_Y 600

typedef struct	s_coord
{
	int			x;
	int			y;
	int			z;
}				t_coord;

typedef struct	s_draw
{
	int			dx;
	int			dy;
	int			sx;
	int			sy;
	int			err;
	int			e2;
}				t_draw;

typedef struct	s_img
{
	void	*img;
	int		x;
	int		y;
}				t_img;

typedef struct	s_env
{
	void		*mlx;
	void		*win;
	t_img		*img;
	int			**map;
	int			mapx;
	int			mapy;
	int			size;
	int			color;
	int			endian;
	char		*data;
	int			sizex;
	int			sizey;
	int			posx;
	int			posy;
	int			scale;
	t_coord		rot;
	int			height;
}				t_env;

int		**parse_map(t_env *env, char *mapfile);
void	ft_drawline(t_env *env, t_coord *start, t_coord *end);
void	mlx_imgpixel_put(t_env *env, int x, int y, int color);
void	rotationx(t_coord *coord, int angle);
void	rotationy(t_coord *coord, int angle);
void	rotationz(t_coord *coord, int angle);
void	rotation(t_coord *start, t_coord *end, t_coord rot);

#endif
