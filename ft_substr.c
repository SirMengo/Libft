/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 09:56:47 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/24 11:55:50 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*sub;

	if (!s)
		return (NULL);
	str_len = ft_strlen((char *)s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return ((char *)sub);
}

/*
int main ()
{
	char str [15] = "Hear feel think";
	int start = 3;
	int len = 9;
	printf("Finding substring starting in position %d\n", start);
	printf("and with the length of %d \n", len);
	printf("in the string '%s'\n", str);
	char *cpy = ft_substr(str, start, len);
	printf("Output: '%s'",cpy);
	free(cpy);
}
*/