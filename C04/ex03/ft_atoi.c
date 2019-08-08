/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 21:08:42 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/08 21:09:07 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int result;
	int i;
	int neg;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] <= ' ')
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		neg *=(-1);
		i++ ;
	}
	printf("%d",i);
	while (str[i] >= '0' && str[i] <= '9')
		{
		result = result *10 + str[i] -48;
		i++;
		}
		
	return (result * neg);
}
int main ()
{
	      
	printf("%d",ft_atoi("   ------125lsp455"));
}
