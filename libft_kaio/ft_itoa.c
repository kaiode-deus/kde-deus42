/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:31:31 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/12 13:33:20 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digitscount(long int i)
{
	int	count;

	count = 0;
	if (i == 0)
		count = 1;
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

static void	filldigits(char *str, long int num, int len)
{
	str[len] = '\0';
	while (num > 0)
	{
		len--;
		str[len] = '0' + (num % 10);
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	char		*ptr;
	int			i;
	long int	num;

	num = n;
	i = digitscount(num);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ptr = malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (num == 0)
	{
		ptr[0] = '0';
		ptr[1] = '\0';
	}
	else if (num < 0)
	{
		ptr[0] = '-';
		num = -num;
		filldigits(ptr + 1, num, i - 1);
	}
	else
		filldigits(ptr, num, i);
	return (ptr);
}
