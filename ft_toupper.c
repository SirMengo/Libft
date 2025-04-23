/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:33:39 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 17:19:51 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*
int main()
{
	char lower = 'c';
	char upper = 'G';

	printf("Returning character '%c' has uppercase: '%c' \n"
		,lower, ft_toupper(lower));
	printf("Returning character '%c' has uppercase: '%c' \n"
		,upper ,ft_toupper(upper));	
}
*/