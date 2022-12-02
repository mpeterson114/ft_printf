#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c, int *len)
{
	write(1, &c, 1);
	*len = *len +1;
}

int main()
{
    ft_putchar(c, len);
    printf("%d", len);
    return 0;
}