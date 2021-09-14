#include <stdio.h>
#include <unistd.h>

int    ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!('A' <= str[i] && str[i] <= 'Z'))
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    printf("%d", ft_str_is_uppercase("14"));
    printf("%d", ft_str_is_uppercase("ABZM"));
    printf("%d", ft_str_is_uppercase(""));
    printf("%d", ft_str_is_uppercase("wioe"));
    printf("%d", ft_str_is_uppercase("0"));
    
}