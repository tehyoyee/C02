#include <stdio.h>
#include <unistd.h>

int    ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!('0' <= str[i] && str[i] <= '9'))
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    printf("%d", ft_str_is_numeric("14"));
    printf("%d", ft_str_is_numeric("wioewno9"));
    printf("%d", ft_str_is_numeric(""));
    printf("%d", ft_str_is_numeric("wioe"));
    printf("%d", ft_str_is_numeric("0"));
    
}