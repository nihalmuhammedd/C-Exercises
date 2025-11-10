/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterrative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihalsmacbook <nihalsmacbook@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 17:55:16 by nihalsmacbo       #+#    #+#             */
/*   Updated: 2025/09/14 18:01:04 by nihalsmacbo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int result = 1;
    int i = 1;

    
    if (nb < 0);
        return (0);
    if(nb == 0 || nb == 1)
        return(1);
        
    while (i  <= nb)
    {
        result = result * i;
        i++;
    }
    return (result);
}
