/*
** opt.c for opt in /home/jeremy.elkaim/ADM_FASTAtools_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 19 14:22:06 2017 jeremy elkaim
** Last update Tue Jun 20 19:18:17 2017 jeremy elkaim
*/

#include <stdlib.h>
#include "FASTAtools.h"

int	opt1(t_it *tag)
{
  parsefasta(tag);
  return (0);
}

int	opt2(t_it *tag)
{
  tag->buffer = read_it();
  parsefasta2(tag);
  return (0);
}

int	opt3()
{
  return (84);
}

int	opt4()
{
  return (84);
}

int	opt5()
{
  return (84);
}
