/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 16:56:08 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/06 18:55:11 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_str_is_alpha(char *str)
{
	int i;

	i=0;
	while (str[i])
		{
            
            if ((str[i]<'a' &&  str[i]> 'z') || (str[i]<'A' && str[i]>'Z'))
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


	char gdt[0];
	printf("%d", ft_str_is_alpha(gdt));

}
