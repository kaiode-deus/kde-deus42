/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:36:52 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/12 10:47:18 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_c;
	const unsigned char	*s2_c;
	size_t				i;

	s1_c = s1;
	s2_c = s2;
	i = 0;
	while (i < n)
	{
		if (*s1_c != *s2_c)
			return (*s1_c - *s2_c);
		s1_c++;
		s2_c++;
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char k[] = "hola bdebe commo estas";
	char b[] = "hola como vas ";
	size_t j = 6;

	printf("%d", ft_memcmp(k, b, j));
	return(0);
}*/
