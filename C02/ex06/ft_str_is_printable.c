/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 19:18:05 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/06 19:18:35 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_str_is_printable(char *str)
{    int i;
    
    i=0;
    while (str[i])
    {
        
        if ((str[i]>32 &&  str[i]< 127) )
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
int main()
{
    
    
    char gdt[]="ASTDYVBEFMK";
    printf("%d", ft_str_is_printable(gdt));
    
}
