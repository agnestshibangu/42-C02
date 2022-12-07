#include <stdio.h>
#include <unistd.h>

char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;

    while (str[i])
    {

        if ( str[i] >= 65 && str[i] <= 90 )
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);

}

int main()
{
    char str[] = "FUIEJFEZIOJ";
    int resu;
    resu = ft_strlowcase(str);
    printf("to low case : %s", resu);

    return (0);
}
