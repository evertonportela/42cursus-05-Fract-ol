/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:24:22 by evportel          #+#    #+#             */
/*   Updated: 2023/08/11 11:17:48 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

/** 
 * Checks - Valid Arguments
 * Checks - Initialize Atributes MLX
 * Initialize Loops and Hooks
 * */
int	main(int argc, char *argv[])
{
	t_fractol	fract;

	if (utils_check_args(argc, argv, &fract) == MLX_ERROR)
		return (MLX_ERROR);
	if (utils_mlx_init(&fract) == MLX_ERROR)
		return (MLX_ERROR);
	mlx_loop_hook(fract.mlx_ptr, &fct_draw, &fract);
	mlx_hook(fract.win_ptr, 2, 1L << 0, &utils_key_input, &fract);
	mlx_hook(fract.win_ptr, 17, 1L << 2, &utils_close_window, &fract);
	mlx_loop(fract.mlx_ptr);
	return (MLX_SUCCESS);
}

	// mlx_hook();
	// mlx_destroy_image();
	// mlx_destroy_window();
	// mlx_destroy_display();
	// free();