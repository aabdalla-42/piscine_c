/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 16:44:44 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/12 22:36:56 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int i;
	int temp;

	temp = nb;
	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (i != power)
	{
		nb = nb * temp;
		ft_recursive_power(nb, power);
		i++;
	}
	return (nb);
}
