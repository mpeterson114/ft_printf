#include "../include/ft_printf.h"

int ft_pointer(unsigned int nb, char *base)
{
    int i;

    i = ft_putstr("0x") + ft_hex(nb, base);
    return (i);
}

/*int main()
{
    unsigned int nb = 7389;
    printf("%i", ft_pointer(nb, "0123456789abcdef"));
    return 0;
}*/