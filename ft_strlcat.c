/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:54:21 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 17:09:28 by msimoes          ###   ########.fr       */
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

/*
int main()
{
	char str1[] = "Hello World";
	unsigned long num1 = 12;
	char dest[8] = "Book";

	printf("String 1: %s \n ", str1);
	printf("Copying %lu spots\n",num1);
	printf("to destination string: %s \n",dest);
	ft_strlcat(dest, str1, num1);
	printf("Output: %s", dest);
}
*/