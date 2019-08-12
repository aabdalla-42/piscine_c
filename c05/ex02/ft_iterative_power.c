/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 16:09:02 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/12 22:39:48 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	result = 1;
	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (i <= power)
	{
		result = nb * result;
		i++;
	}
	return (result);
}
