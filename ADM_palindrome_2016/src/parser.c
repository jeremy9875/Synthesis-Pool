/*
** parser.c for parser in /home/jeremy.elkaim/ADM_palindrome_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Jun 15 09:06:33 2017 jeremy elkaim
** Last update Tue Jun 20 07:59:53 2017 jeremy elkaim
*/

#include <stdio.h>
#include <stdlib.h>
#include "palindrome.h"

void	parser2(char **av, int i, t_it *tag)
{
  i = 0;
  while (av[i] != NULL)
    {
      if (my_strcmp_mod(av[i], IMAX) == 0 && av[i + 1] != NULL)
	{
	  if (imax(av, i, tag) != 0)
	    my_exit();
	}
      if (my_strcmp_mod(av[i], NUMBER) == 0 && av[i + 1] != NULL)
	{
	  if (number(av, i, tag) != 0)
	    my_exit();
	}
      else if (my_strcmp_mod(av[i], PAL) == 0 && av[i + 1] != NULL)
	{
	  if (pal(av, i, tag) != 0)
	    my_exit();
	}
      i++;
    }
}

int	parser(char **av)
{
  int	i;
  t_it	*tag;

  i = 1;
  tag = malloc(sizeof(char *) * 10);
  init_struct(tag);
  while (av[i] != NULL)
    {
      if (my_strcmp_mod(av[i], HELP) == 0)
	help(av);
      else if (my_strcmp_mod(av[i], BASE) == 0 && av[i + 1] != NULL)
	{
	  if (base(av, i, tag) != 0)
	    my_exit();
	}
      else if (my_strcmp_mod(av[i], IMIN) == 0 && av[i + 1] != NULL)
	{
	  if (imin(av, i, tag) != 0)
	    my_exit();
	}
      i++;
    }
  parser2(av, i, tag);
  return (0);
}

void	verif_temp(t_it *nb, char *str)
{
  nb = nb;
  str = str;
}

void	help(char **av)
{
  printf("%s", HELP1);
  printf("%s", av[0]);
  printf("%s%s%s%s%s", HELP2, HELP3, HELP4, HELP5, HELP6);
  printf("%s%s%s%s%s", HELP7, HELP8, HELP9, HELP10, HELP11);
  printf("%s%s%s", HELP12, HELP13, HELP14);
}
