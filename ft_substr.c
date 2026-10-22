/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 20:29:27 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/22 13:57:31 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static size_t	get_totallen(size_t strlen, size_t start, size_t len)
{
	if (start >= strlen)
		return (1);
	else if (len > strlen - start)
		return (strlen - start + 1);
	else
		return (len + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	strlen;
	size_t	totallen;

	if (s == NULL)
		return (NULL);
	strlen = ft_strlen(s);
	totallen = get_totallen(strlen, start, len);
	str = malloc(totallen);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < totallen - 1)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

//(totallen>1 && i < len && s[start + i] != '\0')
// int	main(void)
// {
// 	char *str = ft_substr("hello anjal", 5, 10);
// 	printf("str=%s", str);
// }