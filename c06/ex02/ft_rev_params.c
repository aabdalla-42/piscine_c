/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:02:59 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/12 17:44:20 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write (1, &str[i], 1 );
		i++;
	}
}
int ft_strlen(char *str)
{
	int i; 

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int main (int argc, char ** argv)
{
	int i ;
	
	i = argc - 1;
	if (argc == 0)
		return (0);
	while (i >= 1)
	{
		ft_putstr(&argv[i][0]);
		i--;
	}
}
