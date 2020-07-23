/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 08:09:58 by jihhan            #+#    #+#             */
/*   Updated: 2020/07/23 13:09:07 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char        *ft_ltox(long n)
{
    char            i;
    char            buf[32];
    char            *buf_pt;
    unsigned long   data;
    unsigned long   val;
    unsigned long   msk;

    if (!n)
        return strdup("0\0");
    data = (unsigned long) n; 
    msk = 15;
    *(buf + 31) = 0;
    buf_pt = (buf + 30);
    i = -1;
    val = 1;
    while (++i < 16 && data)
    {
        val = (data & msk);
        data -= val;
        val >>= (4 * i);
        *buf_pt-- = *("0123456789abcdef" + val);
        msk <<= 4;
    }
    return strdup(buf_pt+1);
}

