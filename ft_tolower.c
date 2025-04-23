/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:37:59 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 17:18:46 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*
int main()
{
	char lower = 'c';
	char upper = 'G';

	printf("Returning character '%c' has lowercase: '%c' \n"
		,lower, ft_tolower(lower));
	printf("Returning character '%c' has lowercase: '%c' \n"
		,upper, ft_tolower(upper));	
}
*/