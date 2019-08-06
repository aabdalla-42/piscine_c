/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 20:03:44 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/06 20:04:06 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char *ft_strlowcase(char *str)
{
    int i;
    i=0;
    while (str[i])
    {
        
        if (str[i]>='A' &&  str[i]<= 'Z')
        {
            str[i]=str[i]+32;
            
            str[i] += 32;
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
    
    
    char gdt[]="SIJWHQIUDHRIUNFRMD";
    printf("%s", ft_strlowcase(gdt));
    
}
