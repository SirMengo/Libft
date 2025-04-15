/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:58:32 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/14 18:20:46 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t  j;
	
	if(*little == '\0')
		return ((char *)(big));
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		if(big[i] == little[0])
		{
			while((i + j < len) && little[j] != '\0' && big[i + j] == little[j])
				j++;
			if(little[j] == '\0')
				return ((char *)(big + i));	
		}
		i++;
	}
	return (0);
}
