/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tableur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 15:02:32 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/11 21:58:10 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LI	4
#include <unistd.h>
#include <stdlib.h>
int ft_putstr(int *a)
{
	int i;
	i = 0;

	while (a[i])
	{
		write (1, &a[i], 1);
		i++;
	}
	return 0;
}
 void ft_tableur(int * tab)
{
	int i;
	if (!(tab =(((int *)malloc (sizeof(*tab) *LI)))))
	{
		return ;
	}

	i = 0 ;
	while (i < LI)
	{
		tab[i] ='0';
		i++;
	}
	ft_putstr(tab);
}
int main(int argc , char * argv[])
{
	int  a;
	int i;

	a = 0;
	while (argc < 10)
	{
		i = 0;
		while (  argv[i] > a)
		{
			ft_tableur(&a);
			write (1, "\n",1);
			a++;
		}
		i++;
	}
	return (0);
}
