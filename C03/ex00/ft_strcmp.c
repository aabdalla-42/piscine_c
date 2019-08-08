/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:22:06 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/08 14:30:42 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    int t;
    
    i=0;
    t=0;
    
    while (s1[i]  || s2[i] )
    {
        if (s1[i] != s2[i])
        {
            t=(unsigned char)s1[i] -(unsigned char)s2[i];
            return (t);
        }
        
        i++;
    }
    return t;
  

}
