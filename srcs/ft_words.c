#include "../include/ft_printf.h"

/*prints a single character*/

int    ft_putchar(char c)
{
    int i;

    i = 0;
    write(1, &c, 1);
    return (1);
}

/*prints a string*/
int    ft_putstr(char *str)
{
    int i;

    i = 0;
    if (!*str)
        return (6);
    while (str[i] != '\0')
    {
        i = i + ft_putchar(str[i]);
    }
    return (i);
}

/*int main()
{
    printf("%d", ft_putstr("0x"));
    return 0;}*/
