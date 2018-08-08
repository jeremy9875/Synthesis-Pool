/*
** main.c for main in /home/jeremy.elkaim/ADM_SBMLparser_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 12 14:28:16 2017 jeremy elkaim
** Last update Wed Jun 14 11:26:35 2017 jeremy elkaim
*/

#include <stdlib.h>
#include "SBMLparser.h"

int	main(int ac, char **av)
{
  if (ac > 1)
    parser(av);
  else
    {
      my_putstr(ERROR_STD);
      exit (84);
    }
  return (0);
}
