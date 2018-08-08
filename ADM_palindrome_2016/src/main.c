/*
** main.c for main in /home/jeremy.elkaim/ADM_palindrome_2016
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Jun 15 09:04:27 2017 jeremy elkaim
** Last update Fri Jun 16 23:34:33 2017 jeremy elkaim
*/

#include <stdlib.h>
#include "palindrome.h"

int	main(int ac, char **av)
{
  t_it	ap;

  init_struct(&ap);
  if (ac > 1)
    {
      if (parser(av) == 84)
	return (1);
    }
  else
    {
      my_putstr(BADARG);
      exit(84);
    }
  return (0);
}
