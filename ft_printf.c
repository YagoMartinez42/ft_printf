/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:44:40 by samartin          #+#    #+#             */
/*   Updated: 2022/11/18 11:09:01 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char * format, ...)
{
	unsigned int	i;
	int				chr_cnt;
	va_list			f_args;

	va_start(f_args, format);
	i = 0;
	chr_cnt = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			write (1, &format[i], 1);
		}
		else
		{
			write (1, &format[i], 1);
		}
		i++;
	}
	return (chr_cnt);
}
