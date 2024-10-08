/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:18:35 by eldiaz-c          #+#    #+#             */
/*   Updated: 2024/10/08 18:55:33 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char limit)
{
	int	i;
	int	count;
	int	len_total;

	i = 0;
	count = 0;
	len_total = ft_strlen(str);
	while (str[i] != '\0')
	{
		while (str[i] == limit && i < len_total)
			i++;
		while (str[i] != limit && i < len_total)
			i++;
		count++;
	}
	return (count);
}

static void	free_memory(char **result, int count)
{
	while (count >= 0)
	{
		free (result[count]);
		count--;
	}
	free (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		len_word;
	int		i;

}
