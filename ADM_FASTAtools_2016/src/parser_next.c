/*
** parser_next.c for parser_next in /home/jeremy.elkaim/ADM_FASTAtools_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Tue Jun 20 08:22:41 2017 jeremy elkaim
** Last update Tue Jun 20 19:07:39 2017 jeremy elkaim
*/

#include <stdlib.h>
#include "FASTAtools.h"

int     tletter(char c)
{
  if (c == 't' || c == 'T')
    return (1);
  return (0);
}

char	*fastaparser_p2(char *buf, t_it *tag)
{
  if (up_letter(tag->buffer[tag->i]) == 1)
    {
      buf[tag->j] = tag->buffer[tag->i];
      tag->i++;
      tag->j++;
    }
  else if (low_letter(tag->buffer[tag->i]) == 1)
    {
      buf[tag->j] = tag->buffer[tag->i] - 32;
      tag->i++;
      tag->j++;
    }
  else
    {
      buf[tag->j] = tag->buffer[tag->i];
      tag->i++;
      tag->j++;
    }
  return (buf);
}

char	*parserfasta2_p2(char *buf, t_it *tag)
{
  if (up_letter(tag->buffer[tag->i]) == 1)
    {
      buf[tag->j] = tag->buffer[tag->i];
      tag->i++;
      tag->j++;
    }
  else if (low_letter(tag->buffer[tag->i]) == 1)
    {
      buf[tag->j] = tag->buffer[tag->i] - 32;
      tag->i++;
      tag->j++;
    }
  else
    {
      buf[tag->j] = tag->buffer[tag->i];
      tag->i++;
      tag->j++;
    }
  return (buf);
}
