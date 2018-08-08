/*
** parser.c for parser in /home/jeremy.elkaim/ADM_projTester_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
**
** Started on  Wed Jun 21 10:27:34 2017 jeremy elkaim
** Last update Fri Jun 23 17:15:15 2017 jeremy elkaim
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include "projTester.h"

int		parser(char **tab)
{
  int		i;
  t_it		*tag;

  if ((tag = malloc(sizeof(t_it) * 10)) == NULL)
    return (84);
  i = 1;
  while (tab[i] != NULL)
    {
      if (tab[i] != NULL && check_tdf(tab[i]) == 0)
	tree_tab(tab[i], tag, 1, 1);
      else if (search_bft(tab[i]) == 0 && check_tdf(tab[i]) == 1)
	return (84);
      else
	return (84);
      i++;
    }
  return (0);
}

void		tree_tab3(int i, t_it *tag, char *path, int l)
{
  char		*cpy_path;
  struct dirent	**dir;

  scandir(path, &dir, NULL, alphasort);
  if ((cpy_path = malloc(sizeof(char) * my_strlen(path) + 32)) == NULL)
    exit (84);
  if (my_strcmp_bis(dir[i]->d_name, ".") == 1 && dir[i]->d_name != NULL)
    {
      my_putstr(dir[i]->d_name);
      my_putstr(FOLDER);
    }
  strcpy(cpy_path, path);
  my_strcpy(cpy_path, dir[i]->d_name);
  tag->dir = 1;
  tree_tab(cpy_path, tag, l + 1, 1);
}

int	tree_tab4(int l)
{
  int	k;

  k = 0;
  while (k < l)
    {
      my_putstr(ARROW);
      k++;
    }
  return (l);
}

int		tree_tab(char *path, t_it *tag, int l, int tmp)
{
  struct dirent	**dir;
  int		i;
  int		j;

  i = 2;
  j = scandir(path, &dir, NULL, alphasort);
  if (tag->dir == 0)
    tree_tab2(tag, path);
  while (i < j)
    {
      tmp = tree_tab5(l, tmp);
      if (dir[i]->d_type == 4 && dir[i]->d_name[0] != '.')
	{
	  tree_tab3(i, tag, path, l);
	  tmp = 1;
	}
      else if (dir[i]->d_name[0] != '.')
	{
	  my_putstr(dir[i]->d_name);
	  my_putchar('\n');
	  tmp = 1;
	}
      i++;
    }
  return (0);
}

void	tree_tab2(t_it *tag, char *path)
{
  if (tag->dir == 0)
    {
      path = strchange(path);
      my_putchar('\n');
      tag->dir = 0;
    }
  else
    exit(84);
}
