/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:58:32 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/21 13:52:18 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	size_t	i;
	size_t	j;

	if (*l == '\0')
		return ((char *)(b));
	i = 0;
	while (i < len && b[i] != '\0')
	{
		j = 0;
		if (b[i] == l[0])
		{
			while ((i + j < len) && l[j] != '\0' && b[i + j] == l[j])
				j++;
			if (l[j] == '\0')
				return ((char *)(b + i));
		}
		i++;
	}
	return (0);
}
