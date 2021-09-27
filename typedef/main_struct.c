/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_struct.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 11:00:42 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/22 11:13:32 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_point
{
	int x;
	int y;
}				t_point;

int main(void)
{
	t_point a;
	t_point b;
	t_point *ptr;

	a.x = 10;
	a.y = 42;
	b = a;
	ptr = &a;
	ptr->x = 10;
	printf("a.x = %d\na.y = %d\n", a.x, a.y);
	printf("ptr = %d\n", ptr->x);
	return (0);
}
