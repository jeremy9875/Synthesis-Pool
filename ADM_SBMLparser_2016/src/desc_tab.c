/*
** desc_tab.c for desc_tab in /home/jeremy.elkaim/ADM_SBMLparser_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Tue Jun 13 11:31:28 2017 jeremy elkaim
** Last update Wed Jun 14 21:45:50 2017 jeremy elkaim
*/

#include <stdlib.h>
#include <stdio.h>
#include "SBMLparser.h"

void	after_mod(char **tab, t_sbml tag)
{
  int	i;

  i = 0;
  while (tab[i] != '\0')
    {
      if ((my_strcmp(tab[i], NAME) == 0)
	  && (my_strcmp(tab[i + 4], ID) == 0))
	tag.id2 = 1;
      if ((my_strcmp(tab[i], MOD) == 0)
	  && (my_strcmp(tab[i + 1], NAME) == 0))
	tag.name2 = 1;
      i++;
    }
  if (tag.id2 == 1)
    printf("%s%s\n", ARROW, ID);
  if (tag.name2 == 1)
    printf("%s%s\n", ARROW, NAME);
}

void	after_react(char **tab, t_sbml tag)
{
  int	i;

  i = 0;
  while (tab[i] != '\0')
    {
      if ((my_strcmp(tab[i], ID) == 0)
	  && (my_strcmp(tab[i + 2], LIST) == 0))
	tag.id3 = 1;
      if ((my_strcmp(tab[i], REACT) == 0)
	  && (my_strcmp(tab[i + 2], COMP) == 0))
	tag.compartment3 = 1;
      if ((my_strcmp(tab[i], REACT) == 0)
	  && (my_strcmp(tab[i + 1], NAME) == 0))
	tag.name3 = 1;
      if ((my_strcmp(tab[i], REACT) == 0)
	  && (my_strcmp(tab[i + 1], REV) == 0))
	tag.reversible3 = 1;
      i++;
    }
  write_react(tag);
}

void	after_sbml(char **tab, t_sbml tag)
{
  int	i;

  i = 1;
  while (tab[i] != '\0')
    {
      if ((my_strcmp(tab[i], LEV) == 0)
	  && (my_strcmp(tab[i + 1], VER) == 0))
	{
	  tag.level4 = 1;
	  tag.version4 = 1;
	}
      if ((my_strcmp(tab[i], XML) == 0)
	  && (my_strcmp(tab[i - 1], SB) == 0))
	tag.xmlns4 = 1;
      i++;
    }
  if (tag.level4 == 1)
    printf("%s%s\n", ARROW, LEV);
  if (tag.version4 == 1)
    printf("%s%s\n", ARROW, VER);
  if (tag.xmlns4 == 1)
    printf("%s%s\n", ARROW, XML);
}

void	after_species(char **tab, t_sbml tag)
{
  int	i;

  i = 0;
  while (tab[i] != '\0')
    {
      if ((my_strcmp(tab[i], SPE) == 0)
	  && (my_strcmp(tab[i + 1], COMP) == 0))
	tag.compartment5 = 1;
      if ((my_strcmp(tab[i], NAME) == 0)
	  && (my_strcmp(tab[i + 3], ID) == 0))
	tag.id5 = 1;
      if ((my_strcmp(tab[i], SPE) == 0)
	  && (my_strcmp(tab[i + 3], NAME) == 0))
	tag.name5 = 1;
      i++;
    }
  if (tag.compartment5 == 1)
    printf("%s%s\n", ARROW, COMP);
  if (tag.id5 == 1)
    printf("%s%s\n", ARROW, ID);
  if (tag.name5 == 1)
    printf("%s%s\n", ARROW, NAME);
}

void	after_specref(char **tab, t_sbml tag)
{
  int	i;

  i = 0;
  while (tab[i] != '\0')
    {
      if ((my_strcmp(tab[i], SPECREF) == 0)
	  && (my_strcmp(tab[i + 1], STO) == 0))
	tag.species6 = 1;
      if ((my_strcmp(tab[i], STO) == 0)
	  && (my_strcmp(tab[i - 1], SPECREF) == 0))
	tag.stoichiometry6 = 1;
      i++;
    }
  if (tag.species6 == 1)
    printf("%s%s\n", ARROW, SPECREF);
  if (tag.stoichiometry6 == 1)
    printf("%s%s\n", ARROW, STO);
}
