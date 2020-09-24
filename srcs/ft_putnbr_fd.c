/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 11:51:05 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/24 13:39:06 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putnbr_fd(int n, int fd)
{
    size_t          len;
    unsigned int    left;
    char            buf[12];
    char            *buf_pt;

    len = 0;
    if (!n)
    {
        *buf = '0';
        *(buf + 1) = 0;
        buf_pt = buf;
    } else {
        *(buf + 11) = 0;
        buf_pt = (buf + 10);
        left = n;
        if (n < 0)
        {
            *buf = '-';
            left = ~n + 1;
        }
        while (left >= 10)
        {
            *buf_pt-- = '0' + (left % 10);
            left /= 10;
        }
        *buf_pt = '0' + left;
        buf_pt = (*buf == '-') ? (buf_pt - 1) : buf_pt;
        if (*buf == '-')
            *buf_pt = '-';
    }
    while (*(buf_pt + len))
        len++;
    write(fd, buf_pt, len);
}
