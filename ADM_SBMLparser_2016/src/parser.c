/*
** parser.c for parser in /home/jeremy.elkaim/SBMLparser/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 12 09:28:55 2017 jeremy elkaim
** Last update Wed Jun 14 21:47:04 2017 jeremy elkaim
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "SBMLparser.h"

int	parser(char **tab)
{
  int	i;

  i = 1;
  if (my_strcmp(tab[i], HELP) == 0)
    help(tab);
  else if (my_strcmp(tab[i], E) == 0)
    help(tab);
  else if (my_strcmp(tab[i], I) == 0)
    list(tab);
  else if (my_strcmp(tab[i], JSON) == 0)
    help(tab);
  else
    noflag(tab);
  i++;
  return (0);
}

char	**list(char **av)
{
  int	i;
  char	**buf;

  i = 0;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], I) == 0)
	buf = my_strtowordtab(av[i + 1]);
      i++;
    }
  return (buf);
}

char		**openfile(char **av)
{
  int		fd;
  char		*buffer;
  char		**tab;

  if ((buffer = malloc(sizeof(char) * 100001)) == NULL)
    return (NULL);
  fd = open(av[1], O_RDONLY);
  if (fd == - 1)
    {
      my_putstr(ERROR_OPEN);
      exit (84);
    }
  read(fd, buffer, 1000000);
  tab = my_strtowordtab(buffer);
  free(buffer);
  close(fd);
  return (tab);
}

int		noflag(char **av)
{
  int		i;
  char		**buffer;
  t_sbml	tag;

  i = 0;
  init_struct(tag);
  buffer = openfile(av);
  while (buffer[i] != '\0')
    {
      if (my_strcmp_mod(buffer[i], SPECREF) == 0)
	tag.specref = 1;
      else if (my_strcmp(buffer[i], LC) == 0)
	tag.comp = 1;
      else if (my_strcmp(buffer[i], MOD) == 0)
	tag.mod = 1;
      else if (my_strcmp(buffer[i], LR) == 0)
	tag.react = 1;
      else if (my_strcmp(buffer[i], SB) == 0)
	tag.sbml = 1;
      if (my_strcmp(buffer[i], LS) == 0)
	tag.species = 1;
      i++;
    }
  display_part(buffer, tag);
  return (0);
}
