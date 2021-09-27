/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add_link.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 11:47:57 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/23 10:08:02 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

t_list	*add_link(t_list *list, char *str)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->str = str;
		tmp->next = list;
	}
	return (tmp);
}
