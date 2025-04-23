/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:40:23 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 16:55:52 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (0);
}

/*
int main()
{
	char str1[] = "Hello World";
	char ch1 = 'o';
	char ch2 = 'c';
	int i = 5;

	printf("Search for character '%c'\n", ch1);
	printf("in the first %d\n", i);
	printf("characters of the string '%s'\n", str1);
	printf("Output: '%p'\n\n", ft_memchr(str1, ch1, i));

	printf("Search for character '%c'\n", ch2);
	printf("in the first %d\n", i);
	printf("characters of the string '%s'\n", str1);
	printf("Output: '%p'\n", ft_memchr(str1, ch2, i));
}
*/