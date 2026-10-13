/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:40:45 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/13 18:46:34 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stddef.h>
// #include"libft.h"

// size_t ft_strlcpy(char *dst, const char *src, size_t size){
// return 0;
// }

#include<stdio.h>
#include<bsd/string.h>


int main(void)
{
    const char s[] = "hello";
    const char *src = s;
    char dest[3];

    int i=strlcpy(dest, src, 4);

    printf("%s\n", dest);
    return 0;
}
