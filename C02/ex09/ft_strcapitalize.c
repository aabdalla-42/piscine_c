/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 20:21:52 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/07 13:47:35 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char    *ft_strlowcase(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    if (i == 0)
    {
        return (0);
    }
    return (str);
}

char *ft_strcapitalize(char *str)
{
    while(str[i])
   {
       ft_strlowcase (str[i]);
   }
    
}





int main()
{
    
    
    char gdt[]="dvdvdvghfevehdbv jdguyhgjuygn 4545uhvfmuih59ruvfr efwhih+-efbfebf ";
    printf("%s", ft_strcapitalize(gdt));
    
}
