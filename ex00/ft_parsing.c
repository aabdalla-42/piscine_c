/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 19:28:28 by elaachac          #+#    #+#             */
/*   Updated: 2019/08/11 20:36:03 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_tab(char c, int *tab)
{
	int i;

	i = 0;
	i = c - '0';
	*tab = i;
	return (tab);	
}

int		*ft_parsing(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (!(str[i] == ' ' || (str[i] >= '1' && str[i] <= '4')))
			return (0);
		if (str[i] >= '1' && str[i] <= '4')
		{
			ft_tab(str[i],tab[j]);
			j++;
		}
		i++;
		if (j == 16)
		{
			tab[j] = '\0';
			return (tab);
		}
	}
}
