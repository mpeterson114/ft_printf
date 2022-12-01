#include "../include/ft_printf.h"

/*prints a single character*/

int    ft_putchar(char c)
{
    int i;

    i = 0;
    write(1, &c, 1);
    return (i + 1);
}

/*prints a string*/
int    ft_putstr(char *str)
{
    int i;

    i = 0;
    if (!str)
        ft_putstr("(null)");
        return (6);
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    return (i);
}

/*int main()
{
    char str[] = "wxyz";
    printf("%d", ft_putstr(str));
    return 0;
}*/