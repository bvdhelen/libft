/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 21:39:03 by eldiaz-c          #+#    #+#             */
/*   Updated: 2024/10/03 18:49:11 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int		i;
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;

	i = 0;
	temp_dest = (unsigned char *) dest;
	temp_src = (unsigned char *) src;
	if (dest == NULL || src == NULL)
		return (dest);
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	src[] = "@bvdhelen es mi insta";
	char	dest[25];

	ft_memcpy(dest, src, 9);
	dest[9] = '\0'; //Asegurarme que dest esté terminado en NULL
	printf("%s", dest);
	return (0);
}
*/