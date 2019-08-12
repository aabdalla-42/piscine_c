/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:45:31 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/12 22:20:26 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
void ft_swap(char **str1, char **str2)
{
	char *a;

	a = *str1;
	*str1 = *str2;
	*str2 = a;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int t;

	i = 0;
	t = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			t = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (t);
		}
		i++;
	}
	return (t);
}
int main (int argc, char **argv)
{
	int i;
	int a;
	int c;

	i = 1;
	a = 0;
	while (i < argc -1)
	{
		c = i + 1;
		a =ft_strcmp(argv[i], argv[c]);
		if (a > 0)
			ft_swap(&argv[i], &argv[c]);
		i++;
	}
	i = 1;
	while (i < argc )
	{
		ft_putchar(argv[i]);
		i++;
	}
}
