/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 18:03:57 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/04 18:31:57 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putstr(char *str)
{
int i;

 i = 0;
while (str[i] != '\0' )
	{
		write(1,&str[i],1);
		i++;
	}

}
 int main(void)
{
	char *a ="defrfr";
	ft_putstr(a);
	return 0;
}
