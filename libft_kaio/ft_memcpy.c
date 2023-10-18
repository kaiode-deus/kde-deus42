/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:13:21 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/11 18:46:29 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			*tsd;
	const char		*crs;

	if (src == NULL && dst == NULL)
	{
		return (NULL);
	}
	tsd = dst;
	crs = src;
	i = 0;
	while (i < len)
	{
		tsd[i] = crs[i];
		i++;
	}
	return (dst);
}
/*
int main()
{
	char f[20] = "hola mundo!";
	char k[20] = "buenos dias!";
	size_t n = 11;

	printf("%s", ft_memcpy(f, k, n));
	return(0);
}*/
