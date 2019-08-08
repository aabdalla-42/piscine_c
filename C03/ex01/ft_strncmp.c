/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:22:33 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/07 16:26:39 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int t;

	i=0;
	t=0;
	while (s1[i] == s2[i] && s1[i] && i < n )
	{
		i++;	
	}
	if (n == 0)
	{
		return 0;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
int main ()
{
printf ("%d", ft_strncmp("abdalla","adballa",4));
}
