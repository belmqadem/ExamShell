#ifndef FLOOD_FILL_H
#define FLOOD_FILL_H

#include <stdlib.h>
#include <stdio.h>

typedef struct  s_point
{
	int x;
	int y;
}	t_point;

void	flood_fill(char **tab, t_point size, t_point begin);
void 	fill_maze(char **tab, t_point size, t_point curr, char to_fill);
char**	make_area(char** zone, t_point size);

#endif