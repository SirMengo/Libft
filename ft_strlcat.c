/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:54:21 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/14 17:04:37 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_length;
	size_t	src_length;
	size_t	i;
	
	i = 0;
	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (dest_length >= destsize)
		return (destsize + src_length);
	while (src[i] && (dest_length + i + 1) < destsize)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}
