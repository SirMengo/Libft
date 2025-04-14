/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:06:54 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/14 11:01:27 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *temp_dest;
	unsigned char *temp_src;
	
	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	i = 0;
	if (temp_dest > temp_src)
		while(n-- > 0)
			temp_dest[n] = temp_src[n];
	else
		while(i++ < n)
			temp_dest[i - 1] = temp_src[i - 1];
	return (dest);
}
