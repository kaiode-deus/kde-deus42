/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:36:32 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/12 11:42:13 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t cuenta, size_t tipo)
{
	void	*pt;

	pt = malloc(cuenta * tipo);
	if (!pt)
		return (NULL);
	ft_bzero(pt, cuenta * tipo);
	return (pt);
}
