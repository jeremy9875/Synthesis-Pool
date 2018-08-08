/*
** algo.c for algo in /home/jeremy.elkaim/ADM_calendar_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun 30 15:11:32 2017 jeremy elkaim
** Last update Sat Jul  1 15:18:10 2017 jeremy elkaim
*/

#include <stdlib.h>
#include "calendar.h"

int		new_employp2(t_employee *list, char *buf, int i, int l)
{
  i = new_employp3(list, buf, i);
  if (buf[i - 1] == ' ' && buf[i] != '\0')
    {
      while (buf[i] != ' ')
	{
	  list->zipcode[l] = buf[i];
	  i++;
	  l++;
	}
      i++;
    }
  i = new_employ4(list, buf, i);
  return (0);
}

int	new_employp3(t_employee *list, char *buf, int i)
{
  int	j;

  j = 0;
  if (buf[i - 1] == ' ' && buf[i] != '\0')
    {
      while (buf[i] != ' ' && buf[i] != '\n')
	{
	  list->firstname[j] = buf[i];
	  i++;
	  j++;
	}
      i++;
    }
  i = new_employ5(list, buf, i);
  return (i);
}

int	new_employ5(t_employee *list, char *buf, int i)
{
  int	k;

  k = 0;
  if (buf[i - 1] == ' ' && buf[i] != '\0')
    {
      while (buf[i] != ' ')
	{
	  list->poste[k] = buf[i];
	  i++;
	  k++;
	}
      i++;
    }
  return (i);
}

int	new_employ4(t_employee *list, char *buf, int i)
{
  int	m;

  m = 0;
  if (buf[i - 1] == ' ' && buf[i] != '\0')
    {
      while (buf[i] != ' ')
	{
	  list->id[m] = buf[i];
	  i++;
	  m++;
	}
    }
  else
    i++;
  return (i);
}

void             new_employ(char *buf, int i)
{
  t_employee    *list;
  int           t;
  int		l;

  l = 0;
  t = 0;
  list = malloc(sizeof(t_employee));
  init_list(list);
  while (buf[i] != '\n')
    {
      if (buf[i - 13] == 'n' && buf[i - 12] == 'e'
	  && buf[i - 3] == 'e' && buf[i - 2] == 'e' && buf[i - 1] == ' ')
        {
          while (buf[i] != ' ')
            {
              list->lastname[t] = buf[i];
              t++;
              i++;
            }
	  i++;
	  new_employp2(list, buf, i, l);
        }
      i++;
    }
  test(list);
}
