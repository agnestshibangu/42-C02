#include <stdio.h>
#include <string.h>

int     ft_str_is_alpha(char *str)
{
    int i;

    i = 0;

    while ( (str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) )
    {
        i++;
        return (1);

    }

    if (str[i] == '\0')
    {
       return (1);
    }

    else
    {
        return (0);
    }
}

int main()
{
    char str[] = "2561561fesgfesz";
    int resu;

    resu = ft_str_is_alpha(str);
    printf("return %d", resu);

    return(0);

}

