/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:56:49 by eldiaz-c          #+#    #+#             */
/*   Updated: 2024/10/27 04:04:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_putchar_fd(char c, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_putnbr_unsigned_fd(unsigned int n, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_print_hexadecimal_lower(unsigned int n, int fd);
int	ft_print_hexadecimal_upper(unsigned int n, int fd);
int	ft_print_pointer(void *ptr, int fd);
int	ft_format(va_list args, char format, int fd);
int	ft_printf(char const *data, ...);

#endif