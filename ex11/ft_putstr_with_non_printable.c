/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehyoyee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 19:03:00 by tehyoyee          #+#    #+#             */
/*   Updated: 2021/09/16 19:03:03 by tehyoyee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_put_hexa(char c)
{
    char    *arr;
    
    arr = "0123456789abcde";
    if (c >= 16)
    {
        ft_putchar(arr[c / 16]);
        ft_putchar(arr[c % 16]);
    }
    else
    {
        ft_putchar('0');
        ft_putchar(arr[c % 16]);
    }
}

void    ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;

    while (str[i] != '\0')
    {
        if (32 <= str[i] && str[i] <= 126)
            ft_putchar(str[i]);
        else
        {
            ft_putchar('\\');
            ft_put_hexa(str[i]);
        }
        i++;
    }
}

int main(void)
{
    char str[25] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
}