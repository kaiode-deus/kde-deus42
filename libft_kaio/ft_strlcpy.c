/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 00:24:44 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/12 14:01:04 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstlen)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (dstlen != '\0')
	{
		while (i < (dstlen - 1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len_src);
}
/*
int	main(void)
{
	size_t	i;

	char a[] = "hola buenos dias";
	char b[] = "hola buenas noches";
	i = 14;
	printf("%zu", ft_strlcpy(a, b, i));
	return (0);
}
#include <stdlib.h>
#include <string.h>

int	main(int c, char **v)
{
	if(c == 4)
	{
		printf("mi funcion '%zu\n", ft_strlcpy(v[1], v[2], atoi(v[3])));
	}
	return(0);
}*/
