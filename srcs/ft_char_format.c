/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:26:29 by mpeterso          #+#    #+#             */
/*   Updated: 2022/11/20 20:48:21 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*prints a single character*/

int ft_char_format(char c)
{
    int i;

    i = 0;
    ft_putchar_fd(c, 1);
    return(i + 1);
}

/*int main()
{
    char c = 'x';
    printf("%c", ft_char_format(c));
    return 0;
}*/