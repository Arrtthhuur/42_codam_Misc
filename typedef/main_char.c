/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 10:51:20 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/22 10:56:58 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef char cacahuete;

int	main(void)
{
	cacahuete a;

	a = 'x';
	write(1, &a, 1);
	return (0);
}
