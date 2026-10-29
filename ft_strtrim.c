/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:22:35 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/29 13:39:53 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static size_t	str_startindex(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		foundflag;

	foundflag = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		foundflag = 0;
		while (set[j] != '\0' && foundflag == 0)
		{
			if (set[j] == s1[i])
				foundflag = 1;
			j++;
		}
		if (!foundflag)
			return (i);
		i++;
	}
	return (i - 1);
}

static size_t	str_endindex(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		foundflag;

	foundflag = 0;
	i = ft_strlen(s1);
	while (i > 0)
	{
		j = 0;
		foundflag = 0;
		while (set[j] != '\0' && foundflag == 0)
		{
			if (s1[i - 1] == set[j])
				foundflag = 1;
			j++;
		}
		if (!foundflag)
			return (i);
		i--;
	}
	return (0);
}

static char	*strcpy_start_end(size_t slen, size_t startindex, char *str,
		char const *s1)
{
	size_t	i;

	i = 0;
	while (i < slen)
	{
		str[i] = s1[startindex + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	slen;
	size_t	startindex;
	size_t	endindex;
	char	*str;

	startindex = str_startindex(s1, set);
	endindex = str_endindex(s1, set);
	if (!endindex)
		slen = 1;
	else
		slen = endindex - startindex;
	str = malloc(slen + 1);
	if (str == NULL)
		return (NULL);
	if (endindex > 0)
		str = strcpy_start_end(slen, startindex, str, s1);
	else
		str[0] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char *str = ft_strtrim("*-*hello-*-*-*s", "*-");
// 	printf("str=%s\n", str);

// 	// int i=str_endindex("*-*hello-*-*-*","*-");
// 	// printf("end index=%d",i);
// }