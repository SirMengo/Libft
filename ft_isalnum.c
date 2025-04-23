/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 03:15:46 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 11:15:05 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
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
	printf("Character y: %d \n", ft_isalnum(alpha));
	printf("Character 5: %d \n", ft_isalnum(num));
	printf("Character +: %d \n", ft_isalnum(sign));
	printf("Character \\n: %d \n", ft_isalnum(non));
	printf("Character non ASCii: %d \n", ft_isalnum(140));
}
*/