/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:56:43 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 11:30:51 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*
int main()
{
	char str1[] = "Hello World";
	unsigned long num1 = 6;

	printf("String: %s \n Filling %lu spots with NULL '0' \n", str1, num1);
	ft_bzero(str1, num1);
	printf("Output: %s", str1);
}
*/