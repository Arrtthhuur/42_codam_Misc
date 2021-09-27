/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_union.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 11:22:00 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/22 11:38:47 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct	s_test
{
	int		i;
	char	c;
	float	f;
	char	tab[4];
};

union	u_test
{
	int		i;
	char	c;
	float	f;
	char	tab[4];
};

int main(void)
{
	union u_test	a;

	a.i = 424242;
	printf("%d\n%d\n%d\n%d\n", a.tab[0], a.tab[1], a.tab[2], a.tab[3]);
	printf("struct size = %lu\n", sizeof(struct s_test));
	printf("union size = %lu\n", sizeof(union u_test));
	return (0);
}
