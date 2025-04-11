/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:51:47 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/11 12:14:36 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(char *src);
size_t	ft_strlen(const char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *str, size_t n);
#endif
