/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:00:06 by mpeterso          #+#    #+#             */
/*   Updated: 2022/12/02 11:18:17 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "../libft/libft.h"

//int ft_printf(const char *format, ...);
int ft_putnbr(int nb);
int ft_unsigned_len(int nb);
char    *ft_uitoa(int nb);
int ft_unsigned(int nb);

int ft_putchar(char c);
int    ft_putstr(char *str);




#endif