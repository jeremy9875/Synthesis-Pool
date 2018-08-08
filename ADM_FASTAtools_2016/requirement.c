/*
** requirement.c for requirement in /home/jeremy.elkaim/ADM_FASTAtools_2016
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 19 09:55:49 2017 jeremy elkaim
** Last update Mon Jun 19 11:24:58 2017 jeremy elkaim
*/

#include <stdlib.h>

int	not_alphanum(char c)
{
  if (c >= 48 && c <= 57 && c != '\0' || c >= 97
      && c <= 122 && c != '\0' || c >= 65
      && c <= 90 && c != '\0')
    return (1);
  return (0);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}

char	*my_strcapitalize_synthesis(char *str)
{
  int	i;
  char	*buf;

  i = 0;
  buf = malloc(sizeof(char) * my_strlen(str) + 1);
  while (str[i] != '\0')
    {
      if (str[i] >= 97 && str[i] <= 122 && not_alphanum(str[i - 1]) == 0)
	buf[i] = str[i] - 32;
      else if (str[i] >= 65 && str[i] <= 90 && not_alphanum(str[i - 1]) == 1)
	buf[i] = str[i] + 32;
      else
	buf[i] = str[i];
      i++;
    }
  my_strcpy(str, buf);
  return (str);
}
