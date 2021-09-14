#include <unistd.h>
char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        str[i] = str[i] + 32;
        i++;
    }
    return (str);
}
int main(void)
{
    char    *a = "ABCDE";
    a = ft_strupcase(a);
  
}
