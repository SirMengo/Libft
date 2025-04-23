/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 02:37:38 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 11:15:10 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
	printf("Character y: %d \n", ft_isalpha(alpha));
	printf("Character 5: %d \n", ft_isalpha(num));
	printf("Character +: %d \n", ft_isalpha(sign));
	printf("Character \\n: %d \n", ft_isalpha(non));
	printf("Character non ASCii: %d \n", ft_isalpha(140));
}
*/