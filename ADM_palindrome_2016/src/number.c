/*
** number.c for number in /home/jeremy.elkaim/ADM_palindrome_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Jun 15 14:12:50 2017 jeremy elkaim
** Last update Sat Jun 17 21:13:06 2017 jeremy elkaim
*/

#include <stdio.h>
#include <stdlib.h>
#include "palindrome.h"

int	number(char **av, int index, t_it *numb)
{
  int	nb;

  if (checkstr(av, index) == 0)
    {
      nb = atoi(av[index + 1]);
      if (nb >= 0)
	numb->nb = atoi(av[index + 1]);
      calcn(numb);
    }
  else
    return (84);
  return (0);
}

int	base(char **av, int index, t_it *ta)
{
  int	nb;

  if (checkstr(av, index) == 0)
    {
      nb = atoi(av[index + 1]);
      if (nb > 0 && nb > 1 && nb <= 10)
	ta->base = nb;
      else
	return (84);
    }
  return (0);
}

int	pal(char **av, int index, t_it *palindrome)
{
  int	nb;

  if ((checkstr(av, index) == 0))
    {
      nb = atoi(av[index + 1]);
      if (nb >= 0)
	palindrome->palres = nb;
      calcp(palindrome);
    }
  else
    my_exit();
  return (0);
}

int	imin(char **av, int index, t_it *tag)
{
  int	nb;

  if (checkstr(av, index) == 0)
    {
      nb = atoi(av[index + 1]);
      if (nb >= 0)
	tag->imin = nb;
      else
	return (84);
    }
  return (0);
}

int	imax(char **av, int index, t_it *t)
{
  int	nb;

  nb = 0;
  if (checkstr(av, index) == 0)
    {
      nb = atoi(av[index + 1]);
      if (nb >= 0)
	t->imax = nb;
      else
	return (84);
    }
  return (0);
}
