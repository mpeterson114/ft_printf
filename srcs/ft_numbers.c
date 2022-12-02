#include "../include/ft_printf.h"

/*decimal or int*/
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

/*unsigned int*/
int ft_unsigned_len(int nb)
{
    int length;

    length = 0;
    if (nb == 0)
        length = 1;
    while (nb != 0)
    {
        length++;
        nb = nb / 10; 
    }
    return (length);
}

char    *ft_uitoa(int nb)
{
	int	len;
	char			*num;

	len = ft_unsigned_len(nb);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	if (nb == 0)
		num[0] = '0';
	num[len] = '\0';
	while (nb != 0)
	{
		num[len - 1] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (num);
}

int ft_unsigned(int nb)
{
    int len;
    char    *num;

    len = 0;
    num = ft_uitoa(nb);
    len = ft_unsigned_len(nb);
    free(num);
    return (len);
}

int main ()
{
    int nb = 38494738;
    printf("%u", ft_unsigned(nb));
    return 0;
}