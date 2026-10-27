/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 20:05:19 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/27 20:24:58 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	len;

	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
// int main(void){
//     t_list *lista;
//     t_list *listb;
//     t_list *listc;
//     lista=malloc(sizeof(t_list));
//     listb=malloc(sizeof(t_list));
//     listc=malloc(sizeof(t_list));
//     lista->content="hi a";
//     lista->next=listb;
//     listb->content="hi b";
//     listb->next=listc;
//     listc->content="hi c";
//     listc->next=NULL;
//     printf("ll len=%d",ft_lstsize(lista));
// }