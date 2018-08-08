/*
** parser.c for parser in /home/jeremy.elkaim/ADM_FASTAtools_2016
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 19 09:08:24 2017 jeremy elkaim
** Last update Tue Jun 20 19:18:20 2017 jeremy elkaim
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "FASTAtools.h"

int	parser(char **tab, t_it *tag)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      if (my_strcmp_mod(tab[i], HELP) == 0)
	help(tab);
      if (my_strcmp_mod(tab[i], ARG1) == 0)
	opt1(tag);
      if (my_strcmp_mod(tab[i], ARG2) == 0)
	opt2(tag);
      if (my_strcmp_mod(tab[i], ARG3) == 0)
	opt3();
      if (my_strcmp_mod(tab[i], ARG4) == 0)
	opt4();
      if (my_strcmp_mod(tab[i], ARG5) == 0)
	opt5();
      if (my_strcmp_mod(tab[i], ARG6) == 0)
	opt6();
      if (my_strcmp_mod(tab[i], ARG7) == 0)
	opt7();
      i++;
    }
  return (0);
}

int	parsefasta(t_it *tag)
{
  char	*buf;

  buf = malloc(sizeof(char) * 1001);
  tag->buffer = read_it();
  while (tag->buffer[tag->i] != '\0')
    {
      if (tag->buffer[tag->i] == '>')
	{
	  while (tag->buffer[tag->i] != '\n')
	    {
	      buf[tag->j] = tag->buffer[tag->i];
	      tag->i++;
	      tag->j++;
	    }
        }
      buf = fastaparser_p2(buf, tag);
    }
  disp_buffer(buf);
  return (0);
}

int	parsefasta2(t_it *tag)
{
  char	*buf;

  buf = malloc(sizeof(char) * 1000);
  while (tag->buffer[tag->i] != '\0')
    {
      if (tag->buffer[tag->i] == '>')
	{
	  while (tag->buffer[tag->i] != '\n')
	    {
	      buf[tag->j] = tag->buffer[tag->i];
	      tag->i++;
	      tag->j++;
	    }
	}
      if (tletter(tag->buffer[tag->i]) == 1)
        {
          buf[tag->j] = 'U';
          tag->i++;
          tag->j++;
        }
      else
	buf = parserfasta2_p2(buf, tag);
    }
  disp_buffer(buf);
  return (0);
}

int	disp_buffer(char *buf)
{
  int	i;

  i = 0;
  while (buf[i] != '\0')
    {
      if (buf[i] == '>')
	{
	  while (buf[i] < 'A' || buf[i] > 'Z')
	    {
	      my_putchar(buf[i]);
	      i++;
	    }
	}
      if ((buf[i] != ' ' && buf[i] != '\n')
	  || (buf[i] == '\n' && buf[i + 1] == '>'))
	my_putchar(buf[i]);
      if ((buf[i + 1] >= 65 && buf[i + 1] <= 90)
	  && (buf[i] < 65 && buf[i] > 90))
	my_putchar('\n');
      i++;
    }
  my_putchar('\n');
  return (0);
}
