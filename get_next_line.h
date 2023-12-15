/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:18:16 by vcereced          #+#    #+#             */
/*   Updated: 2023/01/18 18:11:07 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

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
