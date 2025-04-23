/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 03:55:23 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 11:15:21 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
int main ()
{
	char alpha = 'y';
	char num = '5';
	char sign = '+';
	char non = '\n';
	printf("Character y: %d \n", ft_isprint(alpha));
	printf("Character 5: %d \n", ft_isprint(num));
	printf("Character +: %d \n", ft_isprint(sign));
	printf("Character \\n: %d \n", ft_isprint(non));
	printf("Character non ASCii: %d \n", ft_isprint(140));
}
*/