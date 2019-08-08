/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:23:37 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/07 16:30:10 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;	
	}
	while (src[i] && i < nb && nb != 0)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return dest;
}

int main ()
{
  char str1[20]="ali";
  char str2[20]="abdalla";
  ft_strncat (str1, str2, 2);
  puts (str1);
  return 0;
}




