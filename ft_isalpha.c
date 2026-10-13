/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:08:01 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/13 13:08:57 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (0);
	return (1);
}
// #include<stdio.h>
// #include<ctype.h>

// int main(void){

// 	printf("EOF is %d\n",ft_isalpha(-1));
// 	printf("EOF is %d\n\n",isalpha(-1));
// 	int i;
// 	int flag=0;
// 	for(i=0;i<=255;i++){
// 		if ((ft_isalpha(i) != 0) != (isalpha(i) != 0)){
//            printf("mismatch at %d\n", i);
// 			flag=1;
// 		}
// 	}
// 	if (flag==0)
// 	printf("all cases correct\n");
// }