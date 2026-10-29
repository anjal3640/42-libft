/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 16:57:59 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/29 17:51:11 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list *nodea;
// 	t_list *nodeb;
// 	t_list *nodec;
// 	t_list *new;
// 	t_list **lst;
// 	t_list *print;
// 	nodea = malloc(sizeof(t_list));
// 	nodeb = malloc(sizeof(t_list));
// 	nodec = malloc(sizeof(t_list));
// 	new = malloc(sizeof(t_list));
// 	nodea->content = "fist node";
// 	nodea->next = nodeb;
// 	nodeb->content = "second node";
// 	nodeb->next = nodec;
// 	nodec->content = "3rd node";
// 	nodec->next = NULL;
// 	new->content = "new node";
// 	new->next = NULL;
// 	lst = &nodea;
// 	print = *lst;
// 	while (print != NULL)
// 	{
// 		printf("%s\n", (char *)print->content);
// 		print = print->next;
// 	}

// 	ft_lstadd_back(lst, new);
// 	printf("###############\n");
// 	print = *lst;
// 	while (print != NULL)
// 	{
// 		printf("%s\n", (char *)print->content);
// 		print = print->next;
// 	}
//     nodea=NULL;
//     *lst=nodea;
//     ft_lstadd_back(lst, new);
//     printf("###############\n");
// 	print = *lst;
// 	while (print != NULL)
// 	{
// 		printf("%s\n", (char *)print->content);
// 		print = print->next;
// 	}
// }