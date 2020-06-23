/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <jihhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 15:29:36 by jihhan            #+#    #+#             */
/*   Updated: 2020/06/23 19:43:46 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char            *ret;
    unsigned int    i;

    if (!s)
        return (NULL);
    ret = malloc(sizeof(char), (strlen(s) + 1));
    if (!ret)
        return (NULL);
    i = 0;
    while (*(s + i))
    {
        *(ret + i) = f(i, *(s + i));
        i++;
    }
    return (ret);
}
