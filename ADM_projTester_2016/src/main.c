/*
** main.c for projTester in /home/jeremy.elkaim/ADM_projTester_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed Jun 21 09:30:27 2017 jeremy elkaim
** Last update Fri Jun 23 09:07:08 2017 jeremy elkaim
*/

#include <stdlib.h>
#include "projTester.h"

int	main(int ac, char **av)
{
  if (ac > 1 && ac < 4)
    {
      if (parser(av) == 84)
	return (84);
    }
  else
    return (84);
  return (0);
}
