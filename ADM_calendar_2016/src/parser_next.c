/*
** parser_next.c for parser_next in /home/jeremy.elkaim/ADM_calendar_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun 30 11:40:32 2017 jeremy elkaim
** Last update Sat Jul  1 14:12:57 2017 jeremy elkaim
*/

#include <stdlib.h>
#include "calendar.h"

int	parser_cal(char *buf)
{
  int	i;

  i = 0;
  while (buf[i] != '\0')
    {
      if (buf[i] == 'n' && buf[i + 1] == 'e' && buf[i + 2] == 'w'
	  && buf[i + 3] == '_' && buf[i + 4] == 'e')
	new_employ(buf, i);
      else if (buf[i] == 'n' && buf[i + 1] == 'e' && buf[i + 2] == 'w'
	       && buf[i + 3] == '_' && buf[i + 4] == 'm')
	new_meet(buf, i);
      i++;
    }
  return (0);
}

void		test(t_employee *test)
{
  my_putstr(STAR);
  my_putstr(test->firstname);
  my_putchar(' ');
  my_putstr(test->lastname);
  my_putstr(POS);
  my_putstr(test->poste);
  my_putstr(CITY);
  my_putstr(test->zipcode);
  my_putchar('\n');
}

int		new_meet(char *buf, int i)
{
  t_meeting	*list;
  int		k;

  k = 0;
  if (((list = malloc(sizeof(t_meeting))) == NULL) || ((list->zip =
malloc(sizeof(char) * 1000)) == NULL) || ((list->day = malloc(sizeof(char)
* 1000)) == NULL) || ((list->id = malloc(sizeof(char) * 1000)) == NULL))
    return (84);
  while (buf[i] != '\n')
    {
      if (buf[i - 3] == 'n' && buf[i - 2] == 'g' && buf[i - 1] == ' ')
	{
	  while (buf[i] != ' ')
	    {
	      list->zip[k] = buf[i];
	      i++;
	      k++;
	    }
	  new_meetp2(buf, i, list);
	}
      i++;
    }
  test2(list);
  return (0);
}

int	new_meetp2(char *buf, int i, t_meeting *list)
{
  int	l;
  int	m;

  l = 0;
  m = 0;
  if (buf[i] == ' ' && buf[i + 1] != '\0')
    {
      i++;
      while (buf[i] != ' ')
	{
	  list->day[m] = buf[i];
	  m++;
	  i++;
	}
    }
  else if (buf[i] >= '0' && buf[i] <= '9')
    {
      list->id[l] = buf[i];
      l++;
      i++;
    }
  else
    i++;
  return (0);
}

void	init_list(t_employee *list)
{
  if ((list->firstname = malloc(sizeof(char) * 1000)) == NULL)
    exit (84);
  if ((list->lastname = malloc(sizeof(char) * 1000)) == NULL)
    exit (84);
  if ((list->zipcode = malloc(sizeof(char) * 1000)) == NULL)
    exit (84);
  if ((list->id = malloc(sizeof(char) * 1000)) == NULL)
    exit (84);
  if ((list->poste = malloc(sizeof(char) * 1000)) == NULL)
    exit (84);
}
