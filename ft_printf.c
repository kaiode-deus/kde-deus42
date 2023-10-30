/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:09:52 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/30 17:23:32 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_write(int c, int *retprinted)//proteger de los errores de write
{
	if (*retprinted == -1)
		return (-1);
	if (write(1, &c, 1) == -1)
		retprinted += -1;
	else
		reetprinted += 1;
}



int	ft_printf(const char *form_str, ...)
{
	int		retprinted;//retornar lo que lee el printf
	va_list	argvar;//iniciamos el * que apunta al argmento ...

	retprinted = 0;
	va_start(argvar, form_str);//iniciando el * al argmento con el tipo de formato que pedimos
	while(*form_str)
	{
		if (*form_str == '%')
			ft_
		else
			ft_write(form_str, retprinted);			
			
		form_str++;
	}






	va_end(argvar);
	return (retprinted);
}
