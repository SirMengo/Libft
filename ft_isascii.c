/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 03:45:00 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 11:15:14 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
	printf("Character y: %d \n", ft_isascii(alpha));
	printf("Character 5: %d \n", ft_isascii(num));
	printf("Character +: %d \n", ft_isascii(sign));
	printf("Character \\n: %d \n", ft_isascii(non));
	printf("Character non ASCii: %d \n", ft_isascii(140));
}
*/