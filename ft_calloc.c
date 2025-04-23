/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:19:12 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 13:41:39 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	mult;

	if (n == 0 || size == 0)
		return (malloc(0));
	mult = n * size;
	if (n > INT_MAX / size)
		return (NULL);
	ptr = malloc(mult);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, mult);
	return (ptr);
}

/*
int main()
{
	char *str1 = ft_calloc(6, sizeof(char));
	char *str2 = ft_calloc(1000, sizeof(char));
	
	printf("String 1: %p\n", str1);
	printf("String 2: %p\n", str2);
}
*/