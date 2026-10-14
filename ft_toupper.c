/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:35:08 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/14 14:50:43 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

// #include<stdio.h>
// #include<ctype.h>

// int main(void){
//     int i;
//     printf("og %c my %c",toupper('a'),ft_toupper('a'));
//     printf("og %c my %c",toupper(-1),ft_toupper(-1));
//     int flag=0;
// 	for(i=0;i<=255;i++){
// 		if ((ft_toupper(i) != 0) != (toupper(i) != 0)){
//            printf("mismatch at %d\n", i);
// 			flag=1;
// 		}
// 	}
// 	if (flag==0)
// 		printf("\nall cases correct\n");
// }