/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 14:26:39 by jihhan            #+#    #+#             */
/*   Updated: 2021/02/02 18:34:13 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void    *ft_realloc(void *ptr, size_t size)
{
    char    *char_pt;
    char    *ret;
    size_t  len;

    ret = NULL;

    if (ptr && size) {
        char_pt = (char *)ptr;
        len = 0;
        ret = malloc(sizeof(char) * size);
        if (!ret)
            return (NULL);

        while (len < size && *(char_pt + len))
        {
            *(ret + len) = *(char_pt + len);
            len++;
        }

    } else if (!ptr && size) {
        ret = malloc(size * sizeof(char));
        if (!ret)
            return (NULL);
    }

    free(ptr);
    return (ret);
}
