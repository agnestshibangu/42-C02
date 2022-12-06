#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src)
{
        int     i;

        i = 0;

        while (src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }

        return dest;

}


int     main()
{
        char dest[] = "epic fail";
        char src[] = "Success";
        printf("%s\n", ft_strcpy(dest, src));
}
