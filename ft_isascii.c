/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:28:35 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/13 15:44:40 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (1);
}

// #include<stdio.h>
// #include<ctype.h>

// int main(void){

// 	printf("EOF is %d\n",ft_isascii(-1));
// 	printf("EOF is %d\n\n",isascii(-1));
// 	int i;
// 	int flag=0;
// 	for(i=0;i<=255;i++){
// 		if ((ft_isascii(i) != 0) != (isascii(i) != 0)){
//            printf("mismatch at %d\n", i);
// 			flag=1;
// 		}
// 	}
// 	if (flag==0)
// 			printf("all cases correct\n");
// }