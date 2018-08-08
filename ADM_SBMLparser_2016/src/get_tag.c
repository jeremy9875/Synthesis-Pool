/*
** get_tag.c for get_tag in /home/jeremy.elkaim/ADM_SBMLparser_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Tue Jun 13 10:58:46 2017 jeremy elkaim
** Last update Wed Jun 14 18:38:21 2017 jeremy elkaim
*/

#include <stdio.h>
#include <stdlib.h>
#include "SBMLparser.h"

t_sbml	init_struct(t_sbml tag)
{
  tag.comp = 0;
  tag.mod = 0;
  tag.react = 0;
  tag.sbml = 0;
  tag.species = 0;
  tag.specref = 0;
  tag.id1 = 0;
  tag.name1 = 0;
  tag.id2 = 0;
  tag.name2 = 0;
  tag.id3 = 0;
  tag.name3 = 0;
  tag.reversible3 = 0;
  tag.compartment3 = 0;
  tag.level4 = 0;
  tag.version4 = 0;
  tag.xmlns4 = 0;
  tag.compartment5 = 0;
  tag.id5 = 0;
  tag.name5 = 0;
  tag.species6 = 0;
  tag.stoichiometry6= 0;
  return (tag);
}

int	display_part2(char **buffer, t_sbml tag)
{
  if (tag.sbml == 1)
    {
      printf("%s\n", SB);
      after_sbml(buffer, tag);
    }
  if (tag.species == 1)
    {
      printf("%s\n", SPECIES);
      after_species(buffer, tag);
    }
  if (tag.specref == 1)
    {
      printf("%s\n", SPECREF);
      after_specref(buffer, tag);
    }
  return (0);
}

int	display_part(char **buffer, t_sbml tag)
{
  if (tag.comp == 1)
    {
      printf("%s\n", COMP);
      after_comp(buffer, tag);
    }
  if (tag.mod == 1)
    {
      printf("%s\n", MOD);
      after_mod(buffer, tag);
    }
  if (tag.react == 1)
    {
      printf("%s\n", REACT);
      after_react(buffer, tag);
    }
  display_part2(buffer, tag);
  return (0);
}

void	after_comp(char **tab, t_sbml tag)
{
  int	i;

  i = 0;
  while (tab[i] != '\0')
    {
      if (my_strcmp(tab[i], ID) == 0 && my_strcmp(tab[i + 2], LIST) == 0)
	tag.id1 = 1;
      if (my_strcmp(tab[i], COMP) == 0 && my_strcmp(tab[i + 1], NAME) == 0)
	tag.name1 = 1;
      i++;
    }
  if (tag.id1 == 1)
    printf("%s%s\n", ARROW, ID);
  if (tag.name1 == 1)
    printf("%s%s\n", ARROW, NAME);
}

void	write_react(t_sbml tag)
{
  if (tag.compartment3 == 1)
    printf("%s%s\n", ARROW, COMP);
  if (tag.id3 == 1)
    printf("%s%s\n", ARROW, ID);
  if (tag.name3 == 1)
    printf("%s%s\n", ARROW, NAME);
  if (tag.reversible3 == 1)
    printf("%s%s\n", ARROW, REV);
}
