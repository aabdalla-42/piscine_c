/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 19:06:33 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/06 19:07:21 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_str_is_lowercase(char *str)
{
    int i;
    
    i=0;
    while (str[i])
    {
        
        if ((str[i]<'a' &&  str[i]> 'z') )
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
    
    char gdt[]="";
    printf("%d", ft_str_is_lowercase(gdt));
    
}
