/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <jihhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 14:54:30 by jihhan            #+#    #+#             */
/*   Updated: 2020/06/23 19:34:24 by jihhan           ###   ########.fr       */
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

    div = 1000000000;
    i = 10;
    left = n;
    if (n < 0)
    {
        buf[0] = '-';
        left = ~n + 1;
        i++;
    }
    while(--i && !(left / div))
        div /= 10; 
    buf[i+1] = 0;
    while (left >= 10)
    {
        buf[i--] = '0' + (left % 10);
        left /= 10;
    }
    buf[i] = left + '0';
    res = strdup(buf); 
    return (res);
}
