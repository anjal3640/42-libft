/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 20:26:06 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/27 20:27:50 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
t_list *ft_lstlast(t_list *lst){
    if(lst==NULL)
        return NULL;
    while(lst->next!=NULL)
        lst=lst->next;
    return lst;
}