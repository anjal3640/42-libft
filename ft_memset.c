/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 20:03:02 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/17 21:31:58 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr;
    size_t i;

    ptr=(unsigned char *)s;
    i=0;
    while(i<n){
        ptr[i]=(unsigned char)c;
        i++;
    }
    return s;
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
//     char str[]="hello";
//     memset(str,77,3);
//     printf("OG %s",str);
//     ft_memset(str,'A',3);
//     printf("\nOG %s",str);

// }