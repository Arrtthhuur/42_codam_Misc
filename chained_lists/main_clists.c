/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_clists.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 11:42:18 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/27 14:44:12 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

int	main(void)
{
	t_list	*list;

	list = NULL;
	list = add_link(list, "toto\n");
	list = add_link(list, "tata\n");
	list = add_link(list, "tutu\n");
	print_list(list);
	return (0);
}
