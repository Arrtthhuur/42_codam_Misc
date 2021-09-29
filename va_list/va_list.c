/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   va_list.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/23 10:13:32 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/27 15:31:41 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libft/libft.h"

int	sum(int num_args, ...)
{
	va_list	ap;
	int		val;
	int		i;

	va_start(ap, num_args);
	i = 0;
	val = 0;
	while (i < num_args)
	{
		val += va_arg(ap, int);
		ft_putstr("Val = ");
		ft_putnbr(val);
		ft_putchar('\n');
		i++;
	}
	va_end(ap);
	return (val);
}

int	min(int num_args, ...)
{
	int		i;
	int		min;
	int		a;
	va_list	ap;

	va_start(ap, num_args);
	min = va_arg(ap, int);
	i = 2;
	while (i <= num_args)
	{
		if ((a = va_arg(ap, int)) < min)
		{
			min = a;
			ft_putstr("Min = ");
			ft_putnbr(a);
			ft_putchar('\n');
		}
		i++;
	}
	va_end(ap);
	return (min);
}

int	main(void)
{
	int		ret_sum;
	int		ret_min;
	int		count;

	count = 5;
	ret_min = min(count, 12, 67, 6, 7, 100);
	ft_putstr("Minimun value is ");
	ft_putnbr(ret_min);
	ft_putchar('\n');
	ret_sum = sum(3, 10, 20, 30);
	ft_putstr("Sum of 10, 20 and 30 = ");
	ft_putnbr(ret_sum);
}
