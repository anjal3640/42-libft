/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:52:37 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/13 16:24:04 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

// #include <string.h>
// #include<stdio.h>

// int main(void){
//     printf("empty lenght %lu %lu\n",ft_strlen(""),strlen(""));
//     printf("anjal lenght %lu %lu\n",ft_strlen("anjal"),strlen("anjal"));
//     printf("2345 45 63 lenght %lu
//	%lu\n",ft_strlen("2345 45 63"),strlen("2345 45 63"));
//     printf("2345 45 63\n anjsdlnd \n next line\n a tab \t with 
// next line\nthe end lenght %lu
//	%lu\n",ft_strlen("2345 45 63\n anjsdlnd \n next line\n a tab \t with 
// next line\n the end"),
// strlen("2345 45 63\n anjsdlnd \n next line\n a tab \t with next 
// line\nthe end"));

// }