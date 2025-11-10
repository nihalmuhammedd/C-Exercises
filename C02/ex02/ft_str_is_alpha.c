/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihalsmacbook <nihalsmacbook@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 02:49:11 by nihalsmacbo       #+#    #+#             */
/*   Updated: 2025/09/07 03:03:49 by nihalsmacbo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     int_str_is_alpha(char   *str)
{

    int i = 0;
    
    if (str[0] == '\0')
        return (1);

    while (str[i] != '\0')
    {
        if(!((str[i] >='a' && str[i]<= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
            return (0);
            
        i++;
        
    }
    return (1);
}
