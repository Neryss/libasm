/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurt <ckurt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:13:34 by ckurt             #+#    #+#             */
/*   Updated: 2021/03/22 10:58:01 by ckurt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
#define LIBASM_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>

size_t		ft_strlen(const char *str);
int			ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *s1, const char *s2);
int			ft_read(int fd, void *buf, size_t n);
int			ft_write(int fd, void *buf, size_t n);
char		*ft_strdup(const char *str);

#endif