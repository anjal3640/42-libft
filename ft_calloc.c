/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:44:08 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/21 19:07:10 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}

// #include<stdio.h>
// int main(void)
// {
//     int     *arr;
//     int     i;

//     arr = ft_calloc(5, sizeof(int));
//     if (arr == NULL)
//     {
//         printf("Memory allocation failed\n");
//         return (1);
//     }
//     i = 0;
//     while (i < 5)
//     {
//         printf("arr[%d] = %d\n", i, arr[i]);
//         i++;
//     }
//     free(arr);
//     return (0);
// }
