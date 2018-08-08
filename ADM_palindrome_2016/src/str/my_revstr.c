/*
** my_revstr.c for my_revstr in /home/jeremy.elkaim/ADM_palindrome_2016/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun 16 22:21:27 2017 jeremy elkaim
** Last update Sat Jun 17 09:40:18 2017 jeremy elkaim
*/

#include <stdlib.h>
#include <stdio.h>
#include "palindrome.h"

char	*my_revstr(char *str)
{
  char	*buf;
  int	i;
  int	j;

  i = 1;
  j = 0;
  if ((buf = malloc(sizeof(char) * my_strlen(str) + 1)) == NULL)
    return (NULL);
  while (str[i] != '\0')
    i++;
  buf[i] = '\0';
  while (i - 1 >= 0)
    {
      i--;
      buf[j] = str[i];
      j++;
    }
  buf[j + 1] = '\0';
  return (buf);
}

int	int_str(int nb)
{
  int	i;
  int	len;

  i = 1;
  len = 0;
  while (nb > 0)
    {
      nb = nb / i;
      i *= 10;
      len++;
    }
  return (len);
}

char	*printinttostr(int nb, int len)
{
  char  *str;

  str = malloc(sizeof(char) * (len + 3));
  sprintf(str, "%d", nb);
  return (str);
}
