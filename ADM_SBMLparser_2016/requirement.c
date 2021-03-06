/*
** requirement.c for requirement in /home/jeremy.elkaim/ADM_SBMLparser_2016
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 12 19:05:09 2017 jeremy elkaim
** Last update Wed Jun 14 16:57:38 2017 jeremy elkaim
*/

#include <stdlib.h>
#include "requirement.h"

int	not_alphanum(char c)
{
  if (c >= 48 && c <= 57 && c != '\0' || c >= 97
      && c <= 122 && c != '\0' || c >= 65
      && c <= 90 && c != '\0')
    return (1);
  return (0);
}
	
int	wordnb(char const *str)
{
  int	nb;
  int	word;
  int	i;

  i = 0;
  nb = 0;
  word = 0;
  while (str[i] != '\0')
    {
      if (word == 0 && not_alphanum(str[i]) == 1)
	{
	  word = 1;
	  nb++;
	}
      if (word == 1 && not_alphanum(str[i]) == 0)
	word = 0;
      i++;
    }
  return (nb);
}

t_word		init_struct()
{
  t_word	tag;

  tag.i = 0;
  tag.j = 0;
  tag.p = 0;
  tag.word = 0;
  tag.index = 0;
  return (tag);
}

void	select_word(char **tab, char const *str, int nb, t_word tag)
{
  char	*buf;

  buf = malloc(sizeof(char) * 1000);
  while (tag.word < nb)
    {
      while (str[tag.i] && not_alphanum(str[tag.i]) == 0)
	tag.i++;
      tag.j = tag.i;
      while (str[tag.i] && not_alphanum(str[tag.i]) == 1)
	tag.i++;
      tab[tag.word] = malloc(sizeof(char) * ((tag.i - 1) - tag.j + 2));
      tag.index = 0;
      tag.p = tag.i - 1;
      buf = tab[tag.word];
      while (tag.j <= tag.p)
	{
	  buf[tag.index] = str[tag.j];
	  tag.j++;
	  tag.index++;
	}
      buf[tag.index] = '\0';
      tag.word++;
    }
}

char		**my_strtowordtab_synthesis(char const *str)
{
  char		**tab;
  int		nb;
  int		word;
  t_word	tag;

  word = wordnb(str);
  tab = malloc(sizeof(char *) * (nb + 1));
  tag = init_struct();
  select_word(tab, str, word, tag);
  tab[word] = NULL;
  return (tab);
}
