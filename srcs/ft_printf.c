#include "../include/ft_printf.h"

int ft_select_format(va_list args, const char format)
{
    int i; 

    i = 0;
    if (format == 'c')
        i += ft_putchar(va_arg(args, int));
    if (format == 's')
        i += ft_putstr(va_arg(args, char *));
    if (format == 'd' || format == 'i')
        i += ft_putnbr(va_arg(args, int));
    if (format == 'u')
        i += ft_unsigned(va_arg(args, unsigned int));
    if (format == 'p')
        i += ft_pointer(va_arg(args, unsigned long long), "0123456789abcdef");
    if (format == 'x')
        i += ft_hex(va_arg(args, unsigned int), "0123456789abcdef");
    if (format == 'X')
        i += ft_hex(va_arg(args, unsigned int), "0123456789ABCDEF");
    if (format == '%')
        i += ft_percent();
    return (i);
}

int ft_printf(const char *str, ...)
{
    int length;
    int i;
    va_list args;

    va_start(args, str);
    i = 0;
    length = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            length += ft_select_format(args, str[i + 1]);
            i++;
        }
        else
            length += ft_putchar(str[i]);
        i++;
    }
    return (length);
}

/*int main()
{
    char str[] = "Megan";
    int x = -31;
    void *ptr = &x;
    unsigned int z = 2380;

    ft_printf("hey %s are you %d years old?", str, x);
    printf("\n");
    ft_printf("do you live at %p ?", ptr);
    printf("\n");
    ft_printf("A: %% , B: %x , C: %X , D: %u", z, z, z);
    printf("\n");
    return 0;
}*/