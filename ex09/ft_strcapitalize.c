/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehyoyee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:11:09 by tehyoyee          #+#    #+#             */
/*   Updated: 2021/09/16 17:11:12 by tehyoyee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int     check_alphabet(char c)
{
    if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
        return 1;
    return 0;        
}

int     check_num(int n)
{
    if ('0' <= n && n <= '9')
        return 1;
    return 0;
}

char    *ft_capitalize(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    i = 1;
    if (check_alphabet(str[0]))
    {
        str[0] -= 32;
    }
    while (str[i] != '\0')
    {
        if (check_alphabet(str[i]) && !(check_alphabet(str[i - 1])) && !(check_num(str[i - 1])))
            str[i] -= 32;
        i++;
    }
    return (str);
}

int main(void)
{
    char    str[70] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("%s", ft_capitalize(str));
}