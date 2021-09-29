/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hex_conv.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/29 19:08:21 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/29 19:33:39 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		quotient;
	int		remainder;
	int		decimalnum;
	int		j;
	int		i;
	char	hexadecimalnum[100];

	i = 0;
	j = 0;
	decimalnum = 424242;
	quotient = decimalnum;
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			remainder += 48;
		else
			remainder += 55;
		hexadecimalnum[j] = remainder;
		j++;
		quotient = quotient / 16;
	}
	i = j - 1;
	while (i >= 0)
	{
		printf("%c", hexadecimalnum[i]);
		i--;
	}
	return (0);
}
