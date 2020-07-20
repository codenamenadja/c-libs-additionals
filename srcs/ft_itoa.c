/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <jihhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 14:54:30 by jihhan            #+#    #+#             */
/*   Updated: 2020/07/20 12:56:19 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char    *ft_itoa(int n)
{
    int             div;
    unsigned int    left;
    char            *res;
    int             i;
    char            buf[12];

    if (!n)
        return (strdup("0\0"));
    div = 1000000000;
    i = 0;
    left = n;
    if (n < 0)
    {
        buf[0] = '-';
        left = ~n + 1;
        i++;
    }
    while(!(left / div))
        div /= 10; 
    while (left >= 10)
    {
        buf[i++] = '0' + (left / div);
        left %= div;
        div /= 10;
    }
    buf[i] = left + '0';
    buf[i+1] = 0;
    return (strdup(buf)); 
}

