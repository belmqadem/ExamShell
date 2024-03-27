#include "flood_fill.h"

void  fill_maze(char **tab, t_point size, t_point curr, char to_fill)
{
    if (curr.y < 0 || curr.y >= size.y || curr.x < 0 || curr.x >= size.x || tab[curr.y][curr.x] != to_fill)
        return ;

    tab[curr.y][curr.x] = 'F';
    fill_maze(tab, size, (t_point){curr.x - 1, curr.y}, to_fill);
    fill_maze(tab, size, (t_point){curr.x + 1, curr.y}, to_fill);
    fill_maze(tab, size, (t_point){curr.x, curr.y - 1}, to_fill);
    fill_maze(tab, size, (t_point){curr.x, curr.y + 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
    fill_maze(tab, size, begin, tab[begin.y][begin.x]);
}
