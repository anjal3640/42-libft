/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:37:01 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/13 16:24:07 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

//  #include <stdio.h>
//  #include <ctype.h>

// int main(void){
// 	//printf("1234345 is %d\n",ft_isdigit(1234345));
// //	printf("1234345 is %d\n\n",isdigit(1234345));

// 	printf("0 is %d\n",ft_isdigit('0'));
// 	printf("0 is %d\n\n",isdigit('0'));

// 	printf("5 is %d\n",ft_isdigit('5'));
// 	printf("5 is %d\n\n",isdigit('5'));
// 	printf("9 is %d\n",ft_isdigit('9'));
// 	printf("9 is %d\n\n",isdigit('9'));
// 	printf("a is %d\n",ft_isdigit('a'));
// 	printf("a is %d\n\n",isdigit('a'));
// 	printf("null is %d\n",ft_isdigit('\0'));
// 	printf("null is %d\n\n",isdigit('\0'));
// 	printf("EOF is %d\n",ft_isdigit(-1));
// 	printf("EOF is %d\n\n",isdigit(-1));
// 	int i;
// 	int flag=0;
// 	for(i=0;i<=255;i++){
// 		if ((ft_isdigit(i) != 0) != (isdigit(i) != 0)){
//            printf("mismatch at %d\n", i);
// 			flag=1;
// 		}
// 	}
// 	if (flag==0)
// 		printf("all cases correct\n");
// }