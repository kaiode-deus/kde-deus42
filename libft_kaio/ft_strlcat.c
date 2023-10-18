/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 02:58:34 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/12 14:00:33 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (len <= dst_len)
	{
		return (src_len + len);
	}
	while (src[i] != '\0' && i < len - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	char a[] = "hola bebesitas";
	char b[] = "adios noche";
	size_t i = 6;

	printf("%zu", ft_strlcat(a, b, i));
	return(0);
}*/
