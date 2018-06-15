/*
** EPITECH PROJECT, 2018
** env.c
** File description:
** env functions
*/
#include "shell.h"
#include "const_values.h"
#include <stdlib.h>
#include <string.h>

char	*get_env_name(t_node *head, char *name)
{
	t_node	*tmp = head;
	t_save	*content;

	if (!head)
		return (NULL);
	do {
		content = (t_save *)tmp->data;
		tmp = tmp->next;
		if (strcmp(content->name, name) == SUCCESS)
			return (content->name);
	} while (tmp != head);
	return (NULL);
}

char	*get_env_content(t_node *head, char *name)
{
	t_node	*tmp = head;
	t_save	*content;

	if (head == NULL)
		return (NULL);
	do {
		content = (t_save *)tmp->data;
		tmp = tmp->next;
		if (strcmp(content->name, name) == SUCCESS)
			return (content->content);
	} while (tmp != head);
	return (NULL);
}

bool	check_env_name(t_node *head, char *name)
{
	t_node	*tmp = head;
	t_save	*content;

	if (head == NULL)
		return (false);
	do {
		content = (t_save *)tmp->data;
		tmp = tmp->next;
		if (strcmp(content->name, name) == SUCCESS)
			return (true);
	} while (tmp != head);
	return (false);
}