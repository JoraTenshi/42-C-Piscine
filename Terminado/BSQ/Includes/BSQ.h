/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jora <jora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:52:08 by jora              #+#    #+#             */
/*   Updated: 2024/03/20 12:08:48 by jora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
void	open_file(char *filename, int *fd);
char	*get_firstline(char	**map, char *filename);
int		ft_strlen(char *str);
char	*ft_malloc(char *str);
void	check_square(char **map, char *filename);
void	read_map(char *filename, char **map, char *rows, char *columns);
void	is_valid(char *filename);
#endif