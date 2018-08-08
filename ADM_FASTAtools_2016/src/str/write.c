/*
** write.c for write in /home/jeremy.elkaim/ADM_FASTAtools_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 19 09:10:23 2017 jeremy elkaim
** Last update Tue Jun 20 08:38:06 2017 jeremy elkaim
*/

#include <unistd.h>
#include "FASTAtools.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
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
