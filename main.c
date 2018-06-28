/*
** main.c for lemin in /home/benjamin.g/delivery/CPE_2016_Lemin
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Wed Apr  5 16:09:13 2017 Benjamin GAYMAY
** Last update Sat Apr 22 12:31:20 2017 Benjamin GAYMAY
*/

#include <stdlib.h>
#include "my.h"
#include "algo.h"
#include "my_printf.h"

void	show_rooms(char **file)
{
  int	i;

  i = 0;
  while (file[++i] != NULL)
    {
      if (line_is_connect(file[i]) == SUCCESS)
	break ;
      else
	my_printf("%s\n", file[i]);
    }
}

int		main()
{
  t_map_info	info;
  t_graph	*graph;
  t_list	*room_name;

  if (start_parsing(&graph, &info, &room_name) == ERROR)
    return (ERROR);
  if (start_algo(graph, room_name, info) == ERROR)
    {
      do_my_free(&info, room_name, graph);
      return (ERROR);
    }
  do_my_free(&info, room_name, graph);
  return (SUCCESS);
}
