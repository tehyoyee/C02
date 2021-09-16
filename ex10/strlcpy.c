/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehyoyee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:59:26 by tehyoyee          #+#    #+#             */
/*   Updated: 2021/09/16 17:59:28 by tehyoyee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (src[i] != '\0')
    {
        i++;
        j++;
    }
    i = 0;
    while ((i < size - 1) && (src[i] != '\0'))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return j;
}

int main(void)
{
    char    dest[10];
    char    src[10] = "abcdefghij";

    printf("%d", ft_strlcpy(dest, src, 5));
    printf("%s", dest);
}