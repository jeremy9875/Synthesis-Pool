/*
** struct.c for struct in /home/jeremy.elkaim/ADM_palindrome_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Jun 15 14:57:41 2017 jeremy elkaim
** Last update Fri Jun 16 23:36:26 2017 jeremy elkaim
*/

#include <stdlib.h>
#include "palindrome.h"

int	init_struct(t_it *tag)
{
  tag->imax = 100;
  tag->imin = 0;
  tag->base = 10;
  return (0);
}
