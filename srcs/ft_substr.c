/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:44:22 by jihhan            #+#    #+#             */
/*   Updated: 2020/06/23 18:46:24 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *ret;
    char    value;
    size_t  i;

    ret = malloc((len + 1) * sizeof(char));
    if (!ret)
        return (NULL);
    i = 0;
    while (i < len)
    {
        value = *(s + (start + i));
        if(!value)
        {
            free(ret);
            return (NULL);
        }
        *(ret + i) = value; 
        i++;
    }
    *(ret + i) = '\0';
    return (ret);
}
