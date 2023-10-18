/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 06:23:14 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/12 06:27:44 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	c_c;
	char	*str_c;
	int		i;

	i = ft_strlen(str);
	c_c = (char)c;
	str_c = (char *)str;
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
/*
int main()
{
	char a[] = "hola bebeciotes";
	int i = 'e';

	printf("%s", ft_strrchr(a, i));
	return (0);
}*/
