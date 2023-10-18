/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:16:17 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/12 13:15:17 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	contarpalabras(char const *s, char c)
{
	size_t	i;
	size_t	new_word;
	char	anterior;

	new_word = 0;
	i = 0;
	anterior = c;
	while (s[i])
	{
		if (anterior == c && s[i] != c)
		{
			new_word++;
		}
		anterior = s[i];
		i++;
	}
	return (new_word);
}

static char	**liberar(char **tab, size_t pos)
{
	size_t	i;

	i = 0;
	while (i < pos)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**resultado;
	size_t	posicion;
	size_t	inicio;

	i = 0;
	posicion = 0;
	inicio = 0;
	resultado = malloc(sizeof(char *) * (contarpalabras(s, c) + 1));
	if (!resultado)
		return (NULL);
	while (s[i])
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			inicio = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			resultado[posicion++] = ft_substr(s, inicio, i - inicio + 1);
			if (!resultado[posicion - 1])
				return (liberar(resultado, posicion - 1));
		}
		i++;
	}
	resultado[posicion] = NULL;
	return (resultado);
}
/*
int main(int c, char **v)
{
	if (c == 2)
	{
		printf("%c", ft_split(v[1], 'j'));
	}
	return (0);
}*/
