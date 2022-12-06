#include <stdio.h>
#include <unistd.h>

int     ft_str_is_lowercase(char *str)
{

    int i;

    i = 0;

    while (str[i] >= 97 && str[i] <= 122)
    {
        i++;
    }

    if (str[i] == '\0')
    {
       return (1);
    }

    else
    {
        return (0);
    }

     return (1);
}

int main()
{
    char str[] = "AOIDAJZIOAZJ";
    int resu;

    resu = ft_str_is_lowercase(str);
    printf("return %d", resu);

    return(0);
}
