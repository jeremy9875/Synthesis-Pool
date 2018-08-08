/*
** help.c for help in /home/jeremy.elkaim/ADM_SBMLparser_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 12 14:27:47 2017 jeremy elkaim
** Last update Tue Jun 13 11:07:57 2017 jeremy elkaim
*/

#include <stdio.h>
#include "SBMLparser.h"

void	help(char **av)
{
  my_putstr(HELP1);
  my_putstr(av[0]);
  printf("%s%s%s%s%s", HELP2, HELP3, HELP4, HELP5, HELP6);
  printf("%s%s", HELP7, HELP8);
}
