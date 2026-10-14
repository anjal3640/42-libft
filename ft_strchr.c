/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:43:55 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/14 16:58:09 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*firstc;
	char		ch;

	ch = (char)c;
	firstc = &s[0];
	while (*s != '\0')
	{
		if (*s == ch)
		{
			return ((char *)firstc);
		}
		firstc++;
		s++;
	}
	if (*s == ch)
	{
		return ((char *)firstc);
	}
	return (NULL);
}

// #include<stdio.h>
// #include<string.h>
// int main(void){
//     const char str[]="hello world, anjal";
//     const char *s=&str[0];
//     int c=256;
//     printf("my %s  og %s  comp %d",ft_strchr(s,'a'+256),strchr(s,'a'+256),
//	ft_strchr(s,'a'+256)==strchr(s,'a'+256));
// }