/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:30:18 by evportel          #+#    #+#             */
/*   Updated: 2023/08/11 09:58:39 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/fractol.h"

void	fct_pixel_print(t_img *image, int x, int y, int color)
{
	char	*pixel;

	pixel = image->address
		+ (y * image->line_length + x * (image->bits_pixel / 8));
	*(int *)pixel = color;
}

void	fct_color(int x, int y, int iterator, t_fractol *fract)
{
	int	color;

	color = 0;
	if (iterator == fract->max_iterator)
		color = 0x000000;
	else
		color = FCTL_COLOR_CYAN;
	fct_pixel_print(&fract->image, x, y, color);
}