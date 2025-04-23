/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:50:54 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 16:59:55 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
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

	printf("Comparing first %d  \n", i);
	printf("characters of the strings '%s'\n", str1);
	printf("and '%s'\n", str1);
	printf("Output: %d\n\n", ft_memcmp(str1, str1, 5));
	printf("Comparing first %d  \n", i);
	printf("characters of the strings '%s'\n", str1);
	printf("and '%s'\n", str2);
	printf("Output: %d\n", ft_memcmp(str1, str2, 5));
}
*/