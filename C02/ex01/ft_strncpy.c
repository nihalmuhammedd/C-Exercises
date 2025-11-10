/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihalsmacbook <nihalsmacbook@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 02:00:07 by nihalsmacbo       #+#    #+#             */
/*   Updated: 2025/09/07 02:07:22 by nihalsmacbo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncpy(char *dest, char *src, unsigned int n)

{
    unsigned int i = 0;

    
    while (i<n)
    {
        if (src[i] != '\0')
            dest[i] = src[i];
            
        else
            dest[i] = '\0';
        i++;
        
    }

    return (dest);
}
