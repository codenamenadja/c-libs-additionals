/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 08:09:58 by jihhan            #+#    #+#             */
/*   Updated: 2020/07/19 21:06:32 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char        *ft_itox(int n)
{
    char            i;
    char            buf[16];
    char            *buf_pt;
    unsigned int    val;
    unsigned int    msk;

    if (!n)
        return strdup("0\0");
    n = (unsigned int) n;
    msk = 0b11110000000000000000000000000000;
    buf_pt = buf;
    i = -1;
    while (++i < 8)
    {
        if ((val = (n & msk)))
            val >>= (4 * (7-i));
        if (val || buf_pt != buf)
            *buf_pt++ = *("0123456789abcdef" + val);
        msk >>= 4;
    }
    *buf_pt = '\0';
    return strdup(buf);
}

