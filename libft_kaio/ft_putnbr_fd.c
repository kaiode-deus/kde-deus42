/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:44:49 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/12 13:45:56 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int num, int fd)
{
	long	x;

	x = num;
	if (x < 0)
	{
		ft_putchar_fd('-', fd);
		x *= -1;
	}
	if (x / 10)
		ft_putnbr_fd(x / 10, fd);
	ft_putchar_fd((x % 10) + '0', fd);
}
/*
int main (void)
{
	int	num = -9280121;
	printf("El num es = \n");
	ft_putnbr(num);
}*/
