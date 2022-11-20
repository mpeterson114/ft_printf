/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:33:04 by mpeterso          #+#    #+#             */
/*   Updated: 2022/11/20 20:58:25 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int ft_string_format(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        ft_putchar(str[i]);
        i++;
    return(i);
}

int main()
{
    char str[] = "sup bro";
    printf("%d", ft_string_format(str));
    return (0);
}