/*
** strcpy.c for strcpy in /home/jeremy.elkaim/ADM_calendar_2016/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Jun 29 11:34:35 2017 jeremy elkaim
** Last update Thu Jun 29 11:37:16 2017 jeremy elkaim
*/

#include "calendar.h"

char	*my_strcpy(const char *src, char *dest)
{
  int	x;

  x = 0;
  while (src[x] != '\0')
    {
      dest[x] = src[x];
      x++;
    }
  return (dest);
}

char	*my_strncpy(const char *src, int i, char *dest)
{
  int	x;

  x = 0;
  while (src[x] != '\0')
    {
      dest[i] = src[x];
      i++;
      x++;
    }
  return (dest);
}
