/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 17:55:32 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/27 18:56:08 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *data = "hello anjal";
// 	t_list *node = ft_lstnew(data);
// 	printf("data is %s", (char *)node->content);
// }