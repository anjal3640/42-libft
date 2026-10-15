/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:24:35 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/14 17:49:44 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)

{
	size_t i;
	i = 0;
	while (i < n && (*s1 != '\0' || *s2 != '\0'))
		{
			if (*s1 != *s2)
				return ((unsigned char)*s1 - (unsigned char)*s2);

			s1++;
			s2++;
			i++;
		}
	return (0);
	
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char *s1 = "";
// 	const char *s2 = "";
// 	printf("og %d my %d comp %d", ft_strncmp(s1, s2, 7), strncmp(s1, s2, 7),
// 		ft_strncmp(s1, s2, 7) == strncmp(s1, s2, 7));
// }