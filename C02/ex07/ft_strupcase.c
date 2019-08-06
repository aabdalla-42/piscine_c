/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 19:39:45 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/06 19:40:30 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char *ft_strupcase(char *str)
{
    int i;
    i=0;
    while (str[i])
    {
        
        if (str[i]>='a' &&  str[i]<= 'z')
        {
             str[i]=str[i]-32;
        }
        i++;
    }
    if (i==0)
    {
        return 0;;
    }
    return (str);
}

int main()
{
    
    
    char gdt[]="abcefgsaskla";
    printf("%s", ft_strupcase(gdt));
    
}
