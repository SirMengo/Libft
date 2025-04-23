/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:44:08 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 12:22:30 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	if (!str)
		return (NULL);
	while (i + 1 > 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (0);
}

/*
int main()
{
	char str1[] = "Hello World";
	char character1 = 'o';
	char character2 = 'c';

	printf("Search for character '%c' in string '%s'\n", character1, str1);
	printf("Output: '%s'\n", ft_strrchr(str1, character1));

	printf("Search for character '%c' in string '%s'\n", character2, str1);
	printf("Output: '%s'\n", ft_strrchr(str1, character2));
}
*/