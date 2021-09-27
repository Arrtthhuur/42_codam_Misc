/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 13:57:45 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/22 15:04:45 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int			data;
	struct Node	*next;
};

void	print_list(struct Node *n)
{
	while (n != NULL)
	{
		printf("%d ", n->data);
		n = n->next;
	}
}

int		main(void)
{
	struct Node *head = NULL;
	struct Node *second = NULL;
	struct Node *third = NULL;

	head = (struct Node *)malloc(sizeof(struct Node));
	second = (struct Node *)malloc(sizeof(struct Node));
	third = (struct Node *)malloc(sizeof(struct Node));

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	print_list(head);

	return(0);
}

