/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:51:47 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/10 11:21:12 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
int	ft_atoi(char *str);
int	ft_isalnum(int c);
int	ft_isalpha(char c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
char	*ft_strchr(const char *str, int c);
int	ft_strlen(char *str);
int	ft_tolower(int c);
int	ft_toupper(int c);
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#endif