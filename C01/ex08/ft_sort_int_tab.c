/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 00:55:51 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/05 00:56:18 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
    int a;
    int i;
    int tabtmp;
    i =0;
    while (i<size)
    {
        a=0;
        while (a < (size-1))
        {
            
            if (tab[a]> (tab[a]+1))
            {
                tabtmp = tab[a];
                tab[a]=tab[a+1];
                tab[a+1]=tabtmp;
            }
            a++;
        }
        i++;
    }


  
    
    }


