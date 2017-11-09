/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tparand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:44:47 by tparand           #+#    #+#             */
/*   Updated: 2017/11/09 18:34:53 by tparand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
 #define FT_POINT_H

 typedef struct		s_point
 {
	int				x;
	int				y;
 }					t_point;

 void				set_point(t_point *point);

#endif
