/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:23:09 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/07 16:28:13 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	int j;
	int i;
	
	i=0;
	j=0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i]=src[j];
		j++;
		i++;
	}

}
int main ()
{
char a[]="ali";
char b[]="abdalla";
	ft_strcat(a,b);
	printf ("%s",a);
}
