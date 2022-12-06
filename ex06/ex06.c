

#include <stdio.h>
#include <unistd.h>

int     ft_str_is_printable(char *str)
{

    int i;

    i = 0;

    while (str[i] >= 32 && str[i] <= 126)
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
    char str[] = "azdzaz";
    int resu;

    resu = ft_str_is_printable(str);
    printf("return %d", resu);

    return(0);
}
