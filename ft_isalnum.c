/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:10:21 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/13 15:32:52 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!(ft_isalpha(c) || ft_isdigit(c)))
		return (0);
	return (1);
}
// #include<stdio.h>
// #include<ctype.h>

// int main(void){

// 	printf("EOF is %d\n",ft_isalnum(-1));
// 	printf("EOF is %d\n\n",isalnum(-1));
// 	int i;
// 	int flag=0;
// 	for(i=0;i<=255;i++){
// 		if ((ft_isalnum(i) != 0) != (isalnum(i) != 0)){
//            printf("mismatch at %d\n", i);
// 			flag=1;
// 		}
// 	}
// 	if (flag==0)
// 			printf("all cases correct\n");
// }