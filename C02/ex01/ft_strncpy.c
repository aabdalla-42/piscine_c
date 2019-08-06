/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 16:13:41 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/06 16:54:40 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i=0;
	while (i<n)
	{
		dest[i]= src [i];
		i++;
	}
dest[i]='\0';

return dest;

}
int main()
{
	char tsb[20];
	char tavsdg[]="dnefjn";
	ft_strncpy(tsb,tavsdg,6);
	printf("%s",tsb);
}
