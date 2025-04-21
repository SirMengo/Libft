/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:33:44 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/21 14:03:55 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	first_index;
	size_t	last_index;
	char	*trim;

	first_index = 0;
	if (!s1 && !set)
		return (NULL);
	i = ft_strlen(s1);
	while (is_set(set, s1[first_index]) == 1 && s1)
		first_index++;
	last_index = ft_strlen(s1);
	while (is_set(set, s1[last_index - 1]) == 1 && last_index > first_index)
		last_index--;
	trim = ft_calloc(last_index - first_index + 1, sizeof(char));
	if (!trim)
		return (NULL);
	i = 0;
	while (s1 && first_index < last_index)
		trim[i++] = s1[first_index++];
	trim[i] = '\0';
	return (trim);
}
