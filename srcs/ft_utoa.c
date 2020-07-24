/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 08:46:44 by jihhan            #+#    #+#             */
/*   Updated: 2020/07/24 12:53:57 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char    *ft_utoa(unsigned long n)
{
    int             i;
    char            buf[20];
    int             val;

    if (!n)
        return (strdup("0\0"));
    i = 18;
    *(buf+19) = 0;
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
