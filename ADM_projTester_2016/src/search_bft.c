/*
** search_bft.c for search_bft in /home/jeremy.elkaim/ADM_projTester_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Jun 22 19:09:38 2017 jeremy elkaim
** Last update Fri Jun 23 17:15:12 2017 jeremy elkaim
*/

#include <dirent.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "projTester.h"

int			search_bft(char *str)
{
  struct dirent		**dir;
  int			j;
  int			i;
  char			*path;

  i = 0;
  if (my_strcmp(str, "*") == 0)
    return (84);
  else if ((path = malloc(sizeof(char) * 100)) == NULL)
    return (84);
  else
    {
      j = scandir("./", &dir, NULL, alphasort);
      while (i < j)
	{
	  if (my_strcmp(str, dir[i]->d_name) == 0)
	    printf("%s\n", dir[i]->d_name);
	  i++;
	}
    }
  return (0);
}

char	*strchange(char *path)
{
  int	i;

  i = my_strlen(path) - 1;
  if (path[i] == '/')
    i--;
  while (path[i] != '/' && path[i] != '\0')
    i--;
  i++;
  while (path[i] != '\0')
    {
      my_putchar(path[i]);
      i++;
    }
  return (path);
}

int	check_tdf(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] == '.' && str[i + 1] == 't')
          && (str[i + 2] == 'd' && str[i + 3] == 'f'))
        return (1);
      i++;
    }
  return (0);
}

int	tree_tab5(int l, int tmp)
{
  if (tmp == 1)
    tree_tab4(l);
  tmp = 0;
  return (tmp);
}
