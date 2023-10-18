/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:01:46 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/10 12:20:00 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
    char cadena[] = "Hello123";
	int i = 0;

    printf("Cadena de entrada: %s\n", cadena);

    while (cadena[i] != '\0')
    {
        if (ft_isalpha(cadena[i]))
        {
            printf("%c es una letra.\n", cadena[i]);
        }
        else
        {
            printf("%c no es una letra.\n", cadena[i]);
        }
		i++;
    }

    return 0;
}*/
