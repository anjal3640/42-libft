/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:39:25 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/17 19:23:17 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

int	ft_atoi(const char *nptr)

{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -sign;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		i = i * 10 + ((char)*nptr - '0');
		nptr++;
	}
	return (i * sign);
}

// #include <stdlib.h>
// #include <stdio.h>

// int	main(void)
// {
// 	const char str[] = "\n  -1234udvuv ";
// 	const char *nptr;
// 	nptr = str;
// 	printf("og=%d my=%d comp=%d", atoi(nptr), ft_atoi(nptr),
// 		atoi(nptr) == ft_atoi(nptr));
// }