/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 02:45:58 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 11:15:18 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
	printf("Character y: %d \n", ft_isdigit(alpha));
	printf("Character 5: %d \n", ft_isdigit(num));
	printf("Character +: %d \n", ft_isdigit(sign));
	printf("Character \\n: %d \n", ft_isdigit(non));
	printf("Character non ASCii: %d \n", ft_isdigit(140));
}
*/