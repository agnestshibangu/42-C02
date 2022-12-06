#include <stdio.h>
#include <unistd.h>

int     ft_str_is_uppercase(char *str)
{

    int i;

    i = 0;

    while (str[i] >= 65 && str[i] <= 90)
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
    char str[] = "489489";
    int resu;

    resu = ft_str_is_uppercase(str);
    printf("return %d", resu);

    return(0);
}
