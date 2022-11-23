/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_num_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:25:17 by samartin          #+#    #+#             */
/*   Updated: 2022/11/23 18:41:23 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


static int	drop_nb(char *nbdigs, int n)
{
	int	dig;

	dig = 0;
	while (n >= 10)
	{
		nbdigs[dig] = (n % 10) + '0';
		n = n / 10;
		dig++;
	}
	nbdigs[dig] = n + '0';
	return (dig);
}

unsigned int	pf_putint(int num, char mode)
{
	int				dig;
	unsigned int	sdig;
	unsigned int	count;
	char			nb_digits [10];

	count = 0;
	if (mode == 's')
	{
		if (num == -2147483648)
		{
			write (1, "-2", 2);
			num = 147483648;
			count = 2;
		}
		if (num < 0)
		{
			write (1, "-", 1);
			num = num * -1;
			count = 1;
		}
	}
	else
		
	dig = drop_nb(nb_digits, num);
	while (dig >= 0)
	{
		write (1, (nb_digits + dig), 1);
		dig--;
	}
	return (count);
}

unsigned int	pf_puthex(int num, char mode)
{
	return ((unsigned int) num);
}

unsigned int	pf_putaddr(void *addr)
{
	return ((unsigned int) addr);
}
