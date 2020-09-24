/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 11:37:22 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/24 11:38:51 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putstr_fd(char *s, int fd)
{
    size_t      len;

    len = 0;
    while (*(s + len))
        len++;
    write(fd, s, len);
}
