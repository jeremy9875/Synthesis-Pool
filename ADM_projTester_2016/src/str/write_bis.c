/*
** write_bis.c for write_bis in /home/jeremy.elkaim/ADM_projTester_2016/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun 23 11:31:00 2017 jeremy elkaim
** Last update Fri Jun 23 15:13:43 2017 jeremy elkaim
*/

#include "projTester.h"

int     my_strcmp_bis(const char *str, const char *cmp)
{
  if (str[0] != cmp[0])
    return (1);
  return (0);
}

char    *my_strcpy(char *dest, char *src)
{
  int   x;
  int   i;

  x = 0;
  i = my_strlen(dest);
  while (src[x] != '\0')
    {
      dest[i] = src[x];
      x++;
      i++;
    }
  return (dest);
}
