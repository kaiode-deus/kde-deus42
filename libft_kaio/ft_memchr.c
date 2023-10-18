/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:10:15 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/12 10:30:55 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	const unsigned char	*c_str;
	unsigned char		c_h;
	size_t				i;

	i = 0;
	c_str = str;
	c_h = (unsigned char)c;
	while (i < len)
	{
		if (*c_str == c_h)
			return ((void *)(c_str));
		c_str++;
		i++;
	}
	return (NULL);
}
/*
#include <stdlib.h>
#include <string.h>

int main(int c, char **v)
{
	if (c == 3)
	{
		printf("%s\n", ft_memchr(v[1], atoi(v[2]), 13));
	}
	return (0);
}

int	main(void)
{
	char k[] = "hola bdebe commo estas";
	int c = 'd';
	size_t j = 8;

	printf("%s", ft_memchr(k, c, j));
	return(0);
}*/
