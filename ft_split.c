/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:18:35 by eldiaz-c          #+#    #+#             */
/*   Updated: 2024/10/09 19:26:22 by eldiaz-c         ###   ########.fr       */
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
		if ((i == 0 && str[i] != limit)
			|| (str[i] != limit && str[i - 1] == limit))
			count++;
		i++;
	}
	return (count);
}

static char	**free_memory(char **result, int count)
{
	while (count >= 0)
	{
		free (result[count]);
		count--;
	}
	free (result);
	return (NULL);
}

static int	count_letters(char const *str, char limit)
{
	int	len;

	len = 0;
	while (str[len] != '\0' && str[len] != limit)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		len_word;
	int		word_count;
	int		i;
	int		j;

	word_count = count_words(s, c);
	result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (j < word_count)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		len_word = count_letters(&s[i], c);
		result[j] = ft_substr(s, i, len_word);
		if (result[j] == NULL)
			return (free_memory(result, j - 1));
		i = i + len_word;
		j++;
	}
	result[j] = NULL;
	return (result);
}

void print_split_result(char **result) 
{
    if (result == NULL) {
        printf("NULL\n");
        return;
    }
    for (int i = 0; result[i] != NULL; i++) {
        printf("Word %d: %s\n", i, result[i]);
    }
}

void free_split(char **result) {
    if (result != NULL) {
        for (int i = 0; result[i] != NULL; i++) {
            free(result[i]);
        }
        free(result);
    }
}

/* int main() {
    char *str5 = ""; // Test with an empty string
    char c = ' '; // Delimitador

    char **result;

    printf("Testing ft_split with various strings:\n");

    result = ft_split(str5, c);
    printf("\nInput: '%s'\n", str5);
    print_split_result(result);
    free_split(result);

    return 0;
} */