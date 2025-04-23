/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 08:43:01 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/23 18:09:12 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}

/*
int main()
{
	t_list *node1;
	t_list *node2;
	t_list *node3;
	char c[] = "a";
	char d[] = "b";
	char e[] = "c";
	
	node1 = ft_lstnew(c);
	node2 = ft_lstnew(d);
	node3 = ft_lstnew(e);
	
	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	while(node1)
	{
		size_t len;
		len = 0;

		while(((char *)node1->content)[len])
			len++;
		write(1, node1->content, len);
		write(1, "\n", 1);	
		node1 = node1->next;
	}
}
*/