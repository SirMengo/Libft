/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:40:13 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 17:59:15 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int main()
{
	char *c = "a";
	char *d = "b";
	char *e = "c";
	t_list *node1;
	t_list *node2;
	t_list *node3;

	node1 = ft_lstnew(c);
	node2 = ft_lstnew(d);
	node3 = ft_lstnew(e);
	ft_lstadd_front(&node3, node2);
	ft_lstadd_front(&node3, node1);

	while(node3)
	{
		int len;
		len = 0;

		while(((char *)node3->content)[len])
			len++;
		write(1, node3->content, len);
		write(1, "\n", 1);
		node3 = node3->next;	
	}	
}
*/