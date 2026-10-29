/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 19:39:59 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/29 20:01:04 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *ptr;
	t_list *start;
    void *content;
	if (!f || !del)
		return (NULL);
	ptr = NULL;
	while (lst)
	{
        content = f(lst->content);
		if (!ptr)
		{
            
			ptr = ft_lstnew(content);
			start = ptr;
		}
		else
			ptr->next = ft_lstnew(content);
		lst = lst->next;
	}
	return (start);
}