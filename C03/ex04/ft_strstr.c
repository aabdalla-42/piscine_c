
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:24:10 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/07 16:34:15 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int special;
	
	i = 0;
	special = 1;
	j = 0;

	while (str[i] && special == 1)
	{	
		if (str[i] == to_find[i] )
		{	
			j++;	
		}
		else 
		{
			
		}
		
	i++;		
	}
	printf ("%d",i);
	j = i;
	printf ("%d",j);
	while (str[j] && special == 0)
	{
		str[j];
		j++;
		printf ("%d",j);
	}
return str;
}
int main ()
{
	char a[]="ali abdalla";
	printf ("%s",ft_strstr(a,"p"));
	
}
