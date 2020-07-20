/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 08:46:44 by jihhan            #+#    #+#             */
/*   Updated: 2020/07/20 12:48:57 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char    *ft_utoa(unsigned int n)
{
    char            *res;
    int             i;
    char            buf[11];
    int             val;

    if (!n)
        return (strdup("0\0"));
    i = 9;
    buf[11] = 0;
    while(n >= 10)
    {
        val = n % 10;
        *(buf + i--) = val + '0';
        n -= val;
        n /= 10;
    }
    *(buf + i) = n + '0';
    return (strdup(buf + (i)));
}

