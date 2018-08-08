/*
** main.c for main in /home/jeremy.elkaim/ADM_FASTAtools_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 19 09:04:58 2017 jeremy elkaim
** Last update Tue Jun 20 19:16:10 2017 jeremy elkaim
*/

#include <stdlib.h>
#include "FASTAtools.h"

void	init_struct(t_it *tag)
{
  tag->i = 0;
  tag->j = 0;
  tag->buffer = malloc(sizeof(char) * 1000);
}

int	main(int ac, char **av)
{
  t_it	*tag;

  tag = malloc(sizeof(t_it) * 10);
  if (ac > 1)
    {
      init_struct(tag);
      parser(av, tag);
    }
  else
    {
      my_putstr(INV_ARG);
      exit (84);
    }
  return (0);
}
