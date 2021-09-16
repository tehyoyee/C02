/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehyoyee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 23:12:06 by tehyoyee          #+#    #+#             */
/*   Updated: 2021/09/16 17:23:28 by tehyoyee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        str[i] = str[i] - 32;
        i++;
    }
    return (str);
}

int main(void)
{
	char a[5] = "abcde";

    printf("%s", ft_strupcase(a));
}
