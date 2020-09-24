/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 11:38:10 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/24 11:50:51 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void        ft_putendl_fd(char *s, int fd)
{
    size_t      len;
    char        *s_l;

    len = 2;
    while (*(s + (len - 2)))
        len++;
    s_l = malloc(sizeof(char) * len);
    if (!s_l)
        return;
    len = 0;
    while (*(s + len))
    {
        *(s_l + len) = *(s + len);
        len++;
    }
    *(s_l + len++) = '\n';
    *(s_l + len++) = 0;
    write(fd, s_l, len);
    free(s_l);
}
