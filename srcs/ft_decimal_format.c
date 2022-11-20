/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:01:52 by mpeterso          #+#    #+#             */
/*   Updated: 2022/11/20 20:37:22 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int ft_decimal_format(int n)
{
    int i;

    i = 0;
    ft_putnbr_fd(n, 1);
    return(i + 1);
}

int main()
{
    int n = 34784932;
    printf("%d", ft_decimal_format(n));
    return (0);
}