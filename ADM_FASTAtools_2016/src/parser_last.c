/*
** parser_last.c for parser_last in /home/jeremy.elkaim/ADM_FASTAtools_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 19 19:41:07 2017 jeremy elkaim
** Last update Tue Jun 20 08:22:12 2017 jeremy elkaim
*/

#include <stdlib.h>
#include "FASTAtools.h"

char	*my_strcpy(const char *src, char *dest)
{
  int	x;

  x = 0;
  while (src[x] != '\0')
    {
      dest[x] = src[x];
      x++;
    }
  return (dest);
}

char	*my_strncpy(const char *src, int i, char *dest)
{
  int	x;

  x = 0;
  while (src[x] != '\0')
    {
      dest[i] = src[x];
      i++;
      x++;
    }
  return (dest);
}

char	*check_stack(char *buff, char *stack)
{
  int	i;
  char	*new_stack;

  if ((i = verif_buff(buff)) == 84)
    return (NULL);
  if ((new_stack = x_malloc(sizeof(char) *
                            (my_strlen(buff) + my_strlen(stack)))) == NULL)
    return (NULL);
  if (stack != NULL)
    {
      new_stack = my_strcpy(stack, new_stack);
      free (stack);
    }
  i = my_strlen(new_stack);
  new_stack = my_strncpy(buff, i, new_stack);
  return (new_stack);
}

int	up_letters(char c)
{
  if (c == 'A' || c == 'C' || c == 'G' || c == 'U' || c == 'N')
    return (1);
  return (0);
}

int	low_letters(char c)
{
  if (c == 'a' || c == 'c' || c == 'g' || c == 'u' || c == 'n')
    return (1);
  return (0);
}
