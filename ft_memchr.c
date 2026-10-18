/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:15:26 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/18 19:28:47 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "limits.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	c = (unsigned char)c;
	while (n > 0)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
		n--;
	}
	return (NULL);
}

// #include<stdio.h>
// #include<string.h>
// int main(void){
//     char str[]="hello world anjal";
//     char *ptr=ft_memchr(str,'a',10);
//     printf("%s",ptr);
// }