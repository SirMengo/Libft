/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:06:34 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 17:02:01 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp_src;
	unsigned char	*temp_dest;

	i = 0;
	if (!dest && !src)
		return (dest);
	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dest;
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	return (dest);
}

/*
int main()
{
	char str1[] = "Hello World";
	unsigned long num1 = 3;
	char dest[8] = "Book";

	printf("String: %s \n", str1);
	printf("Copying %lu spots\n", num1);
	printf("to destination string: %s \n",dest);
	ft_memcpy(dest, str1, num1);
	printf("Output: %s", dest);
}
*/