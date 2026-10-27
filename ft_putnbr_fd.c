/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankadava <ankadava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:18:17 by ankadava          #+#    #+#             */
/*   Updated: 2026/10/27 16:50:03 by ankadava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<unistd.h>
#include<limits.h>
void ft_putnbr_fd(int n, int fd){
    unsigned int nbr;
    if(n<0){
        ft_putchar_fd('-',fd);
        nbr=-n;
        
    }
    else
        nbr=n;
    if(nbr<10)
        ft_putchar_fd(nbr+'0',fd);
    else{
        ft_putnbr_fd(nbr/10,fd);
        ft_putnbr_fd(nbr%10,fd);
    }
}

// int main(void){
//     ft_putnbr_fd(INT_MIN,1);
// }