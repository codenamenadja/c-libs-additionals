/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 17:27:32 by jihhan            #+#    #+#             */
/*   Updated: 2020/06/23 19:02:58 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char    *ft_strtrim(const char *s1, const char *set)
{
    char            new_str[BUFSIZ];
    char            *s1_pt;
    unsigned int    new_len;
    unsigned int    set_len;
    
    if(!s1)
        return (NULL);
    set_len = strlen(set);
    new_len = 0;
    s1_pt = (char *)s1;
    while(*s1_pt)
    {
        if (*s1_pt == *set)
            if (!(strncmp(s1_pt, set, set_len)))
            {
                s1_pt += set_len;
                continue;
            }
        *(new_str + new_len) = *s1_pt++;
        new_len++;
    }
    *(new_str + new_len) = '\0';
    return (strdup(new_str));
}
