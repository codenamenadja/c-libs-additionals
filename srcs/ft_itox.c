/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 16:05:52 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/13 16:06:31 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char    *ft_itox(int n)
{
    char    ret[3];
    char    key;

    if (n < 0 || n > 127)
        return (NULL);
    ret[0] = '0';
    ret[1] = '0';
    if (n)
    {
        key = n / 16;
        ret[0] = '0' + key;
        if (key > 9)
            ret[0] = 'a' + (key - 10);
        key = n % 16;
        ret[1] = '0' + key;
        if (key > 9)
            ret[1] = 'a' + (key - 10);
    }
    ret[2] = '\0';
    return (strdup(ret));
}
