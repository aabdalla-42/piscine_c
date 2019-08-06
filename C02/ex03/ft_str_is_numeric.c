/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 18:56:08 by aabdalla          #+#    #+#             */
/*   Updated: 2019/08/06 18:56:11 by aabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
    int i;
    
    i=0;
    while (str[i])
    {
        if (!(str[i]<'9' &&  str[i]> '1' ))
        {
            return 1;
        }
        i++;
    }
    return 0;
}
            int main (){
            
            char gdt[]="366";
            printf("%d", ft_str_is_numeric(gdt));
            
            }
