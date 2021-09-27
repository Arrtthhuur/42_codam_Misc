/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_list.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 11:51:30 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/22 12:09:50 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "list.h"

void	print_list(t_list *list)
{
	while (list)
	{
		printf("%s", list->str);
		list = list->next;
	}
}
