/*
** requirement.c for requirement in /home/jeremy.elkaim/ADM_calendar_2016
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Jun 29 09:11:32 2017 jeremy elkaim
** Last update Sat Jul  1 15:18:56 2017 jeremy elkaim
*/

#include <stdlib.h>

typedef struct		s_list
{
  void			*data;
  struct s_list		*next;
}			t_list;

int		my_revlist_synthesis(t_list **begin)
{
  t_list	*list;
  t_list	*next_data;
  t_list	*i;

  i = NULL;
  next_data = NULL;
  if (begin != NULL)
    list = *begin;
  while (list != NULL)
    {
      next_data = list->next;
      list->next = i;
      i = list;
      list = next_data;
    }
  *begin = i;
  return (0);
}

t_list	*my_findnodeeqinlist_synthesis(t_list *begin, void *data_ref,
				       int (*cmp)(void *, void *))
{
  while (begin != NULL && cmp(begin->data, data_ref) != 0)
    begin = begin->next;
  return (begin);
}
