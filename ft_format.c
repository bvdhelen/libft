/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:49:46 by eldiaz-c          #+#    #+#             */
/*   Updated: 2024/10/27 04:03:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, char format, int fd)
{
	int	count;

	count = 0;
	(void)fd;
	if (format == 'c')
		count += ft_putchar_fd(va_arg(args, int), 1);
	else if (format == 's')
		count += ft_putstr_fd(va_arg(args, char *), 1);
	else if (format == 'p')
		count += ft_print_pointer(va_arg(args, char *), 1);
	else if (format == 'd' || format == 'i')
		count += ft_putnbr_fd(va_arg(args, int), 1);
	else if (format == 'u')
		count += ft_putnbr_unsigned_fd(va_arg(args, unsigned int), 1);
	else if (format == 'x')
		count += ft_print_hexadecimal_lower(va_arg(args, unsigned int), 1);
	else if (format == 'X')
		count += ft_print_hexadecimal_upper(va_arg(args, unsigned int), 1);
	else if (format == '%')
		count += ft_putchar_fd('%', 1);
	else
		count += write(1, &format, 1);
	return (count);
}
