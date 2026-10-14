/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 19:18:45 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/14 14:32:37 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	destlen;

	i = 0;
	j = 0;
	while (i < size && dest[i] != '\0')
		i++;
	destlen = i;
	while (src[j] != '\0')
	{
		if (src[j] != '\0' && i + 1 < size)
		{
			dest[i] = src[j];
			i++;
		}
		j++;
	}
	if (i < size)
		dest[i] = '\0';
	return (destlen + j);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	const char s[] = "xy"; //"helloi";
// 	const char *src = &s[0];
// 	char d[7] = "ab"; //"world";
// 	char *dest = &d[0];
// 	const char sr[] = "xy"; //"helloi";
// 	const char *sc = &sr[0];
// 	char ds[7] = "ab"; //"world";
// 	char *dst = &ds[0];
// 	int i;
// 	i = strlcat(dst, sc, 15);
// 	printf("\nog %s,%d", dst, i);
// 	i = ft_strlcat(dest, src, 15);
// 	printf("\nmy %s,%d", dest, i);
// 	return (0);
// }