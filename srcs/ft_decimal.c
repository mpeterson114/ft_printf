#include "../include/ft_printf.h"

int ft_putnbr(int nb)
{
    int len;
    char *num;

    len = 0;
    num = ft_itoa(nb);
    len = ft_putstr(num);
    free(num);
    return (len);
}