/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:28:19 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/12 13:29:14 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	len = ft_strlen(s1) - 1;
	while (len >= 0 && ft_strrchr(set, s1[len]))
		len--;
	return (ft_substr(s1, i, len - i + 1));
}
/*
int	main(void)
{
	char	*s1;
	char	*set;

	s1 = "&&quiero borrar algo al final o al inicio&&";
	set = "&";
	printf("String cortada: %s\n", ft_strtrim(s1, set));
	return (0);
}*/
