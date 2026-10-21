/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:07:30 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/21 19:33:14 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*a;
	size_t	i;

	len = ft_strlen(s);
	a = malloc(len + 1);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		a[i] = s[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

// int	main(void)
// {
// 	const char str[] = "anjal";
// 	char *a = ft_strdup(str);
// 	printf("\nthe dup in main a=%s", a);
// }