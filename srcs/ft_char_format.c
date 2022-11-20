/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:26:29 by mpeterso          #+#    #+#             */
/*   Updated: 2022/11/20 18:54:11 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_char_format(char c)
{
    int i;

    i = 0;
    ft_putchar_fd(c, 1);
    i = i + 1;
    return(i);
}

int main()
{
    char c = 'x';
    printf(%c, ft_char_format(c));
    return 0;
}