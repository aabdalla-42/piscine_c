/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 20:21:52 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/06 20:22:12 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char *ft_strcapitalize(char *str)
{
    int i;
    int a;
    i=0;
    a=0;
    
    while (str[i])
    {
        if (str[i]>='A' && str[i]<= 'Z')
        {
            
            str[i]+=32;
        }
        
        i++;
    
    }

    if (i==0)
    {
        return 0;
    }
    return (str);
}





int main()
{
    
    
    char gdt[]="SSECVJKmpwqdudjSWIDJU";
    printf("%s", ft_strcapitalize(gdt));
    
}
