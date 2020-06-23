/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <jihhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 12:03:22 by jihhan            #+#    #+#             */
/*   Updated: 2020/06/23 19:28:37 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char    **ft_split(char const *s, char c)
{
    char        *arr[BUFSIZ];
    ssize_t     len;
    size_t      i;
    char        buf[BUFSIZ];
    char        **res;
     
    if(!*s)
        return (NULL);
    strcpy(buf, s);
    len         = 0;
    i           = 0;
    while (i < strlen(s))
    {
        while (*(s + i) == c)
            *(buf + i++) = 0;
        if (!*(s + i))
            break;
        *(arr + len++) = (buf + i++);
        while (*(s + i) != c && *(s+i))
            i++;
    }
    if(!(*arr))
        return (NULL);
    res = (char **)malloc(sizeof(char *) * (len + 1)); 
    if(!res)
        return (NULL);
    *(res + len) = NULL;
    while(--len >= 0)
        *(res + len) = strdup(arr[len]);
    return (res);
}
