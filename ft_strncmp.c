/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:24:51 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 17:16:09 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (str1[i] || str2[i]))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
int main()
{
	char str1[] = "Hello World";
	char str2[] = "Hey World";
	int i = 5;

	printf("Comparing first %d\n", i);
	printf("characters of the strings '%s'\n", str1);
	printf("and '%s'\n", str1);
	printf("Output: %d\n\n", ft_strncmp(str1, str1, i));
	printf("Comparing first %d", i);
	printf("Comparing first %d\n", i);
	printf("characters of the strings '%s'\n", str1);
	printf("and '%s'\n", str2);
	printf("Output: %d\n", ft_strncmp(str1, str2, i));
}
*/