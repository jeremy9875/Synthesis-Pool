/*
** my_strcmp.c for my_strcmp in /home/jeremy.elkaim/ADM_FASTAtools_2016/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 19 20:01:54 2017 jeremy elkaim
** Last update Tue Jun 20 11:12:12 2017 jeremy elkaim
*/

#include <stdlib.h>
#include "FASTAtools.h"

char    *my_revstr(char *str)
{
  char  *buf;
  int   i;
  int   j;

  i = 1;
  j = 0;
  if ((buf = malloc(sizeof(char) * my_strlen(str) + 1)) == NULL)
    return (NULL);
  while (str[i] != '\0')
    i++;
  buf[i] = '\0';
  while (i - 1 >= 0)
    {
      i--;
      buf[j] = str[i];
      j++;
    }
  buf[j + 1] = '\0';
  return (buf);
}
