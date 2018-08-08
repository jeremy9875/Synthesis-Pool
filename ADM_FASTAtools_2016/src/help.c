/*
** help.c for help in /home/jeremy.elkaim/ADM_FASTAtools_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 19 19:37:36 2017 jeremy elkaim
** Last update Mon Jun 19 19:45:41 2017 jeremy elkaim
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "FASTAtools.h"

void	help(char **av)
{
  printf("%s", HELP1);
  printf(av[0]);
  printf("%s%s%s%s", HELP2, HELP3, HELP4, HELP5);
  printf("%s%s%s%s", HELP6, HELP7, HELP8, HELP9);
  printf("%s%s%s%s", HELP10, HELP11, HELP12, HELP13);
  printf("%s%s%s%s", HELP14, HELP15, HELP16, HELP17);
  printf("%s%s%s%s", HELP18, HELP19, HELP20, HELP21);
  printf("%s%s%s%s%s", HELP21, HELP22, HELP23, HELP24, HELP25);
}

char	*my_memset(char *mal, const char c, int size)
{
  int	x;

  x = 0;
  while (x < size)
    {
      mal[x] = c;
      x++;
    }
  mal[size] = '\0';
  return (mal);
}

char	*read_it()
{
  char	*stack;
  char	*buff;

  if ((stack = x_malloc(sizeof(char) * 10)) == NULL)
    return (NULL);
  if ((buff = x_malloc(sizeof(char) * 10)) == NULL)
    return (NULL);
  while (read(0, buff, 10) != 0)
    {
      if ((stack = check_stack(buff, stack)) == NULL)
        return (NULL);
      free(buff);
      if ((buff = x_malloc(sizeof(char) * 10)) == NULL)
        return (NULL);
    }
  free(buff);
  return (stack);
}

void	*x_malloc(int size)
{
  char	*buff;

  if ((buff = malloc(size + 2)) == NULL)
    {
      my_putstr(ERROR_OPEN);
      return (NULL);
    }
  return ((void *) my_memset(buff, '\0', size + 1));
}

int	verif_buff(char *buff)
{
  int	x;

  x = 0;
  while (buff[x] != '\0')
    {
      if ((buff[x] > 13 && buff[x] < 32))
        {
          my_putstr(ERROR_OPEN);
          return (84);
        }
      x++;
    }
  return (0);
}
