/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 14:12:32 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/12 22:37:57 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int resultat;

	resultat = 1;
	i = 1;
	if (nb == 1 || nb = 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		resultat = resultat * i;
		i++;
	}
	return (resultat);
}
