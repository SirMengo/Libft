/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:53:47 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/22 14:11:03 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int	i;
	
	if (!lst)
		return (0);
	i = 0;
	while(lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
