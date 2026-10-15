/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:24:57 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/15 11:07:00 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (little[i] != '\0')
		i++;
	while (len != 0 && *big != '\0')
	{
		j = 0;
		if (big[0] == little[j])
		{
			while ((big[j] == little[j]) && i <= len && little[j] != '\0')
				j++;
			if (little[j] == '\0')
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	const char	strb[] = "hello world, anjal";
// 	const char	*big = &strb[0];
// 	const char	strl[] = "anja";
// 	const char	*little = &strl[0];

// 	printf("\nmy %s  og %s  comp %d", ft_strnstr(big, little, 17), strnstr(big,
// 			little, 17), ft_strnstr(big, little, 17) == strnstr(big, little,
// 			17));
// }
