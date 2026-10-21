/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:13:16 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/21 12:31:15 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	while (n > 0)
	{
		n--;
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}

// if((s<=d && d<=s+n)||(d<=s && s<=d+n)){
	//     ft_memmove(dest,src,n);
	//     return (dest);
	// }

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char src[] = "hello anjal";
// 	char dest[20];
// 	ft_memcpy(dest, src, 10);
// 	printf("%s", dest);
// }