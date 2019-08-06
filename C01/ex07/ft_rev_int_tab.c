/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 20:02:33 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/04 22:37:39 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_punbr(int nb)
{
    if (nb < (-2147483648))
    {
        ft_putchar('-');
        nb=-nb;
    }
    
    if (nb <0)
    {
        ft_putchar('-');
        nb=-nb;
        
    }
    if (nb>=10)
    {
        ft_punbr(nb / 10);
        ft_punbr(nb % 10);
    }
    else
    {
        ft_putchar(nb +'0');
    }
}
void    ft_swap (int *a, int *b)
{
    int nbr;
    
    
    nbr = *a;
    *a = *b ;
    *b =nbr ;
    ft_punbr(*a);
    ft_punbr(*b);
    
}
void    ft_strlen(char *str)
{
    int i;
    int nbr;
    i=0;
    nbr =0;
    while (str[i]!='\0')
    {
        i++;
    }
    ft_punbr(i);
}

void ft_rev_int_tab(int *tab , int size)
{
    int i;
    int max;
    max = size -1;
    i=0;
    while (i <= size -1 )
    {
        
        
        ft_punbr (tab[max]);
        max--;
        i++;
    }
        
    
   
}
int main ()
{
    int a [9]={1,4,45,4,54,5,4878,7,875};
    ft_rev_int_tab(a,9);
    
}
