/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:50:47 by vcereced          #+#    #+#             */
/*   Updated: 2023/01/19 21:01:02 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include	<stdarg.h>
# include	<unistd.h>
# include	<fcntl.h>
# include	<stdlib.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
char	*get_joint(const char *buffer, char *bufferstatic, char *str_jointed);
size_t	get_strlen(const char *s);
char	*get_strrchr(char *s, int c);
char	*get_clean(char *bufferstatic, char *bufferstatic_cleaned, int i);

#endif