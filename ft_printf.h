/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:28:48 by samartin          #+#    #+#             */
/*   Updated: 2022/11/25 14:05:09 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int				ft_printf(const char *format, ...);
unsigned int	pf_putchar(int chr);
unsigned int	pf_putstr(char *str);
unsigned int	pf_putint(int num, char mode);
unsigned int	pf_puthex(unsigned int num, char *hex_symbols);
unsigned int	pf_putaddr(void *addr);

#endif