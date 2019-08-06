/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 19:12:34 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/06 19:12:39 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int ft_str_is_lowercase(char *str)
{
    int i;
    
    i=0;
    while (str[i])
    {
        
        if ((str[i]>'A' &&  str[i]< 'Z') )
        {
            return 1;
        }
        i++;
    }
    if (i==0)
    {
        return 1;
    }
    return 0;
}
int main (){
    
    char gdt[]="ASKDKMC";
    printf("%d", ft_str_is_lowercase(gdt));
    
}

