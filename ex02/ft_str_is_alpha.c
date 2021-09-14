#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z')))
            return (0);
        i++;
    }
    return (1);
}


int main(void)
{
    printf("%d", ft_str_is_alpha("492"));
    printf("%d", ft_str_is_alpha("23N492"));
    printf("%d", ft_str_is_alpha("aabrmz"));
    printf("%d", ft_str_is_alpha(""));
    printf("%d", ft_str_is_alpha("1"));
}