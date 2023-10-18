/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 08:58:34 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/12 11:07:43 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[0] == 0)
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i + j] == s2[j] && i + j < len && s1[i + j])
		{
			j++;
			if (s2[j] == 0)
				return ((char *)s1 + i);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	char s1[] = "hola buenos dias y adios";
	char s2[] = "d";
	size_t i = 13;

	printf("%s", ft_strnstr(s1, s2, i));
	return (0);
}*/
