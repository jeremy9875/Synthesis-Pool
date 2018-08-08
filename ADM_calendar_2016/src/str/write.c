/*
** write.c for write in /home/jeremy.elkaim/ADM_calendar_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Jun 29 09:07:02 2017 jeremy elkaim
** Last update Thu Jun 29 09:07:08 2017 jeremy elkaim
*/

#include <unistd.h>
#include "calendar.h"

void	my_putchar(const char c)
{
  write(1, &c, 1);
}

void	my_putstr(const char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int	my_strlen(const char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

int	my_strcmp(const char *str, const char *cmp)
{
  int	i;

  i = 0;
  while (str[i] != '\0' && cmp[i] != '\0')
    {
      if (str[i] != cmp[i])
	return (1);
      i++;
    }
  return (0);
}

int	my_strcmp_mod(const char *str, const char *cmp)
{
  int	i;

  i = 0;
  while (str[i] != '\0' && cmp[i] != '\0')
    {
      if (str[i] != cmp[i])
	return (1);
      i++;
    }
  if (str[i] == '\0' && cmp[i] == '\0')
    return (0);
  return (1);
}
