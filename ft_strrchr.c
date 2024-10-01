/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:51:28 by eldiaz-c          #+#    #+#             */
/*   Updated: 2024/10/01 18:36:00 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = ft_strlen(s);
	while (i != 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[0] == c)
		return ((char *)&s[0]);
	return (NULL);
}

/*
int	main(void)
{
	const char	*str = "Mi insta es @bvdhelen!";
	char		caracter_a_buscar = '@';

	printf("%s\n", ft_strrchr(str, caracter_a_buscar));
	return (0);
}
*/