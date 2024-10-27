/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:44:32 by eldiaz-c          #+#    #+#             */
/*   Updated: 2024/10/27 04:03:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *data, ...)
{
	va_list	args;	
	int		i;
	int		count;

	va_start(args, data);
	i = 0;
	count = 0;
	while (data[i] != '\0')
	{
		if (data[i] == '%')
		{
			i++;
			count += ft_format(args, data[i], 1);
		}
		else
			count += write(1, &data[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
