/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:22:56 by jihhan            #+#    #+#             */
/*   Updated: 2020/10/30 15:25:12 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int    **ft_intmapi(int **arr, int (*f)(unsigned int, int))
{
    int             **ret;
    unsigned int    i;

    if (!arr | !(*arr))
        return (NULL);

    i = 0;

    while (*arr + i)
        i++;

    ret = (int **)malloc(sizeof(int *) * (i + 1));

    if (!ret)
        return (NULL);

    *(ret + i + 1) = NULL;

    while (i)
    {
        **(ret + i) = f(i, **(arr + i));
        i--;
    }
    **(ret + i) = f(i, **(arr + i));
    return (ret);
}

