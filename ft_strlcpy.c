/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:16:55 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 17:12:55 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	src_size;

	src_size = ft_strlen(src);
	if (src_size + 1 < dest_size)
		ft_memcpy(dest, src, src_size + 1);
	else if (dest_size != 0)
	{
		ft_memcpy(dest, src, dest_size - 1);
		dest[dest_size - 1] = '\0';
	}
	return (src_size);
}
/*
int main()
{
	char str1[] = "Hello World";
	unsigned long num1 = 3;
	char dest[8] = "Book";

	printf("String: %s \n", str1);
	printf("Copying %lu spots\n",num1);
	printf("to destination string: %s \n",dest);
	ft_strlcpy(dest, str1, num1);
	printf("Output: %s", dest);
}
*/