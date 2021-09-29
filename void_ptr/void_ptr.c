/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   void_ptr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/29 17:52:02 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/29 17:58:34 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		i;
	char	c;
	void	*vptr_int;
	void	*vptr_char;

	i = 5;
	c = 'x';
	vptr_int = &i;
	vptr_char = &c;
	printf("\nValue of iptr = %d", *(int *)vptr_int);
	printf("\nAddress of iptr = %p", vptr_int);
	printf("\nValue of cptr = %c", *(char *)vptr_char);
	printf("\nAddress of cptr = %p", vptr_char);
	return (0);
}
