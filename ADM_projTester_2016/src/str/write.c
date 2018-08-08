/*
** write.c for write in /home/jeremy.elkaim/ADM_projTester_2016/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed Jun 21 09:30:00 2017 jeremy elkaim
** Last update Fri Jun 23 11:30:49 2017 jeremy elkaim
*/

#include <unistd.h>
#include "projTester.h"

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
