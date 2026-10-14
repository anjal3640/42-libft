/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:40:59 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/14 14:50:11 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

#include<stdio.h>
#include<ctype.h>

int main(void){

    printf("og %c my %c\n",tolower('A'),ft_tolower('A'));
    printf("og %c my %c\n",tolower(-1),ft_tolower(-1));
    int i;
    int flag=0;
	for(i=0;i<=255;i++){
		if ((ft_tolower(i) != 0) != (tolower(i) != 0)){
           printf("mismatch at %d\n", i);
			flag=1;
		}
	}
	if (flag==0)
		printf("all cases correct\n");
}
