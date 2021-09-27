/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 11:59:48 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/22 12:01:09 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __list_h__
#define __list_h__

typedef struct s_list t_list;

struct s_list
{
	char	*str;
	t_list	*next;
};

t_list	*add_link(t_list *list, char *str);
void	print_list(t_list *list);

#endif
