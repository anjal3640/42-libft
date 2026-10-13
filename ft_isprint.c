/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:46:10 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/13 15:50:54 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (!((c >= 32 && c<=126 )))
		return (0);
	return (1);
}

#include<stdio.h>
#include<ctype.h>

int main(void){

	printf("EOF is %d\n",ft_isprint(-1));
	printf("EOF is %d\n\n",isprint(-1));
	int i;
	int flag=0;
	for(i=0;i<=255;i++){
		if ((ft_isprint(i) != 0) != (isprint(i) != 0)){
           printf("mismatch at %d\n", i);
			flag=1;
		}
	}
	if (flag==0)
			printf("all cases correct\n");
}