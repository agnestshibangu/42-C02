#include <stdio.h>
#include <string.h>

int     ft_str_is_numeric(char *str)
{
    int i;

    i = 0;

    while ( str[i] >= 48 && str[i] <= 57 )
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

    return(1);
}

int main()
{
    char str[] = "146541:;;::;";
    int resu;

    resu = ft_str_is_numeric(str);
    printf("return %d", resu);

    return(0);

}
