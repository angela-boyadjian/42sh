/*
** EPITECH PROJECT, 2018
** PSU_42sh_2017
** File description:
** display
*/
#include "shell.h"
#include <stdio.h>

void	display(void *data)
{
	t_parser *parser = (t_parser *)data;

	printf("token = %d & name = %s\n", parser->token, parser->name);
}