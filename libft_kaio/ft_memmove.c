/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:08:43 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/11 19:37:30 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c_dst;
	char	*c_src;
	size_t	i;

	c_dst = (char *)dst;
	c_src = (char *)src;
	i = 0;
	if (dst == 0 && src == 0)
		return (NULL);
	if (dst > src)
	{
		while (len-- > 0)
		{
			c_dst[len] = c_src[len];
		}
	}
	else
	{
		while (i < len)
		{
			c_dst[i] = c_src[i];
			i++;
		}
	}
	return (dst);
}
/*
int main()
{
	char a[] = "hola bebedido";
	char b[] = "adios bebecitos";
	size_t i = 8;

	printf("%s", ft_memmove(a, b, i));
	return (0);
}*/
