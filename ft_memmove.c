/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 19:59:07 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/20 15:28:26 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "limits.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (dest > src)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (dest);
}

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	size_t	i;

// 	if (n == 0 || src == dest)
// 		return (dest);
// 	i = 0;
// 	if (dest < src)
// 	{
// 		while (i < n)
// 		{
// 			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
// 			i++;
// 		}
// 	}
// 	else
// 	{
// 		i = n;
// 		while (i > 0)
// 		{
// 			((unsigned char *)dest)[i - 1] = ((const unsigned char *)src)[i
// 				- 1];
// 			i--;
// 		}
// 	}
// 	return (dest);
// }

// void *ft_memmove(void *dest,const void *src, size_t n){
//     unsigned char *temp;
//     size_t i;
//     i=0;
//     if(n==0)
//         return (dest);

//     temp=malloc(n);

//     while(i<n){
//         temp[i]=((unsigned char*)src)[i];
//         i++;
//     }
//     i=0;
//     while(i<n){
//         ((unsigned char*)dest)[i]=temp[i];
//         i++;
//     }

//     free(temp);
//     return (dest);
// }

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "anjal";
// 	char *dest = ft_memmove(str, str, 5);
// 	printf("\nmy%s", dest);
// }