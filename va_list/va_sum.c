/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   va_sum.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 14:49:50 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/27 15:10:35 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	sum(int num_args, ...)
{
	int		val;
	int		i;
	va_list	ap;

	val = 0;
	i = 0;
	va_start(ap, num_args);
	while (i < num_args)
	{
		val += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (val);
}

int	main(int argc, char *argv[])
{
	int	count;

	printf("This program was called with \"%s\".\n", argv[0]);
	count = 1;
	if (argc > 1)
	{
		while (count < argc)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
			count++;
		}
	}
	else
	{
		printf("The command had no others arguments.\n");
	}
	printf("Sum of 10, 20 and 30 = %d\n", sum(3, 10, 20, 30));
	printf("Sum of 4, 20, 25 and 30 = %d\n", sum(4, 4, 20, 25, 30));
	return (0);
}
