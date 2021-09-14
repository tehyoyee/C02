#include <stdio.h>
#include <unistd.h>

int    ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!('a' <= str[i] && str[i] <= 'z'))
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    printf("%d", ft_str_is_lowercase("14"));
    printf("%d", ft_str_is_lowercase("wioewnoz"));
    printf("%d", ft_str_is_lowercase(""));
    printf("%d", ft_str_is_lowercase("wAAe"));
    printf("%d", ft_str_is_lowercase("0"));
    
}