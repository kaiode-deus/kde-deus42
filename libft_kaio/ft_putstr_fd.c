/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:43:10 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/12 13:54:05 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
#include <fcntl.h>  // Necesario para las constantes O_CREAT y O_WRONLY
#include <unistd.h> // Necesario para la función write

int	main(void)
{
	char	*message;
	int		fd;

	message = "Hola, mundo!";
	// Abre un archivo llamado "salida.txt" en modo de escritura
	// Si no existe, lo crea (O_CREAT) y si ya existe, lo sobrescribe (O_WRONLY)
	fd = open("salida.txt", O_CREAT | O_WRONLY, 0644);
	if (fd == -1)
	{
		ft_putstr_fd("Error al abrir el archivo.\n", 2);
			// 2 es el descriptor de archivo para la salida estándar de error (stderr)
		return (1);
	}
	ft_putstr_fd(message, fd); // Escribe la cadena en el archivo
	close(fd); // Cierra el archivo
	return (0);
}
*/
