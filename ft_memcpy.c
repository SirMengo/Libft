/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:06:34 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/14 11:18:12 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp_src;
	unsigned char	*temp_dest;

	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
	}
	return (dest);
}
