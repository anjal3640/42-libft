/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 18:57:56 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/29 19:12:28 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *ptr;
	t_list *temp;
	if (!lst || !del)
		return ;
	ptr = *lst;
	while (ptr != NULL)
	{
		temp = ptr->next;
		del(ptr->content);
		free(ptr);
        ptr=temp;
	}
    *lst=NULL;
	
}
