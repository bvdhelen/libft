/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:18:35 by eldiaz-c          #+#    #+#             */
/*   Updated: 2024/10/08 19:22:01 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char limit)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 && str[i] != limit) || (str[i] != limit && str[i - 1] == limit))
			count++;
		i++;
	}
	return (count);
}



int main(int argc, char *argv[]){
	
	if (argc <= 1)
		return(1);

	printf("--> %d\n", count_words(argv[1], 'k'));
	return (0);
}
/* 
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

} */
