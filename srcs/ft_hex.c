#include "../include/ft_printf.h"

int ft_hex_length(unsigned int nb)
{
    int len;

    len = 0;
    if (nb == 0)
        len = 1;
    while (nb != 0)
    {
        len++;
        nb = nb / 16;
    }
    return (len);
}

void ft_convert_hex(unsigned int nb, char *base)
{
    if (nb >= 16)
    {
        ft_convert_hex(nb / 16, base);
        ft_convert_hex(nb % 16, base);
    }
    else
        write(1, &base[nb], 1);
}

/*prints hexadecimal value and length*/
int ft_hex(unsigned int nb, char *base)
{
    if (nb == 0)
        write(1, "0", 1);
    else
        ft_convert_hex(nb, base);
    return (ft_hex_length(nb));  
}

/*int main()
{
    int nb = 7389;
    printf("%x", ft_hex(nb, "0123456789abcdef"));
    return 0;
}*/