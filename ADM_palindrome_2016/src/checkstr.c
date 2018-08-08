/*
** checkstr.c for checkstr in /home/jeremy.elkaim/ADM_palindrome_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun 16 09:05:12 2017 jeremy elkaim
** Last update Fri Jun 16 23:39:42 2017 jeremy elkaim
*/

#include <stdlib.h>
#include "palindrome.h"

int	checkstr(char **tab, int index)
{
  int	i;

  i = 0;
  while (tab[index + 1][i] != '\0')
    {
      if (tab[index + 1][i] >= '0' && tab[index + 1][i] <= '9')
	i++;
      else
	return (1);
    }
  return (0);
}

int	my_exit()
{
  my_putstr(INV_ARG);
  exit(84);
  return (84);
}

int	no_solution()
{
  my_putstr(NO_SOL);
  exit (0);
  return (0);
}
