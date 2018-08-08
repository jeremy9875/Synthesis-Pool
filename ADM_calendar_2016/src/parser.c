/*
** parser.c for parser in /home/jeremy.elkaim/ADM_calendar_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Jun 29 09:05:26 2017 jeremy elkaim
** Last update Sat Jul  1 15:17:01 2017 jeremy elkaim
*/

#include <stdio.h>
#include <stdlib.h>
#include "calendar.h"

int	parser(char **av)
{
  int	i;

  i = 0;
  if (av[1] != NULL && my_strcmp_mod(av[1], HELP) == 0)
    help();
  else
    while (av[i] != NULL)
      {
	parser1();
	i++;
      }
  return (0);
}

int	parser1()
{
  char	*buf;

  buf = read_it();
  parser_cal(buf);
  return (0);
}

void	help()
{
  printf("%s\n\t", "USAGE");
  printf("%s", "write instructions to the standard output until the");
  printf("%s\n", " END instruction");
  exit(0);
}

void	test2(t_meeting *list)
{
  my_putstr(list->id);
  my_putstr(STAR);
  my_putstr(MEET);
  my_putstr(list->day);
  my_putstr(PLAC);
  my_putstr(list->zip);
  my_putchar('\n');
}
