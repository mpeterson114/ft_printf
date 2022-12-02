#include "../include/ft_printf.h"

/*prints a single character*/

int    ft_putchar(char c)
{
    int i;

    i = 0;
    ft_putchar_fd(c, 1);
    return (i + 1);
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

int main()
{
    printf("%d", ft_putchar('x'));
    return 0;}