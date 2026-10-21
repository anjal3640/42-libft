/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 20:04:01 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/21 20:25:44 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	totallen;
	char	*join;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
    if (s1len > SIZE_MAX - s2len - 1)
        return (NULL);
	totallen = s1len + s2len;
	join = malloc(totallen + 1);
	if (join == NULL)
		return (NULL);
	ft_strlcpy(join, s1, s1len + 1);
	ft_strlcpy(&join[s1len], s2, s2len + 1);
	return (join);
}

//#include <stdio.h>
// int main(void){

//     ft_strjoin("hello ","world !");

// }
