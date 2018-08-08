/*
** opt_next.c for opt_next in /home/jeremy.elkaim/ADM_FASTAtools_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 19 14:26:23 2017 jeremy elkaim
** Last update Tue Jun 20 19:09:05 2017 jeremy elkaim
*/

#include <stdlib.h>
#include "FASTAtools.h"

int	opt6()
{
  return (84);
}

int	opt7()
{
  return (84);
}

int	up_letter(char c)
{
  if (c == 'A' || c == 'C' || c == 'G' || c == 'T' || c == 'N')
    return (1);
  return (0);
}

int	low_letter(char c)
{
  if (c == 'a' || c == 'c' || c == 'g' || c == 't' || c == 'n')
    return (1);
  return (0);
}

int	is_alphanum(char c)
{
  if ((c >= 48 && c <= 57 && c != '\0')
      || (c >= 97 && c <= 122 && c != '\0')
      || (c >= 65 && c <= 90 && c != '\0'))
    return (1);
  return (0);
}
