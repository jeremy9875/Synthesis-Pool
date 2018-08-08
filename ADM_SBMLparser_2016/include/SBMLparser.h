/*
** SBMLparser.h for SBMLparser in /home/jeremy.elkaim/ADM_SBMLparser_2016/include
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 12 14:27:19 2017 jeremy elkaim
** Last update Wed Jun 14 21:56:04 2017 jeremy elkaim
*/

#ifndef SBMLparser_H_
# define SBMLparser_H_

# define	ID		"id"
# define	E		"-e"
# define	I		"-i"
# define	LC		"listOfCompartments"
# define	LR		"listOfReactions"
# define	LS		"listOfSpecies"
# define	JSON		"-json"
# define	COMP		"compartment"
# define	SPECIES		"species"
# define	REACT		"reaction"
# define	SPECREF		"speciesReference"
# define	LISTCOMP	"listOfCompartments"
# define	REV		"reversible"
# define	LIST		"listOf"
# define	LISTSPEC	"listOfSpecies"
# define	LISTREACT	"listOfReactions"
# define	LISTREACTA	"listOfReactants"
# define	LISTPROD	"listOfProducts"
# define	ERROR_STD	"invalid argument -h for help\n"
# define	ERROR_OPEN	"Error file invalid\n"
# define	ARROW		"----->"
# define	MOD		"model"
# define	SB		"sbml"
# define	SPE		"species"
# define	STO		"stoichiometry"
# define	HELP		"-h"
# define	NAME		"name"
# define	HELP1		"USAGE\n\t"
# define	VER		"version"
# define	XML		"xmlns"
# define	LEV		"level"
# define	HELP2		" SBMLfile [-i ID [-e]] [-json]\n\nDESCRIPTI"
# define	HELP3		"ON\n\tSBMLfileSBML file\n\t-i ID\t id of"
# define	HELP4		"the compartment, reaction or product to be ex"
# define	HELP5		"tracted\n\t\t(ignored if uncorrect)\n\t-e\t "
# define	HELP6		"print the equation if a reaction ID is given "
# define	HELP7		"as argument\n\t\t(ignored otherwise)\n\t-json"
# define	HELP8		" \t transform the file into a JSON file\n"

typedef struct          s_word
{
  int                   i;
  int                   j;
  int                   p;
  int                   word;
  int                   index;
}                       t_word;

typedef	struct		s_sbml
{
  int			comp;
  int			mod;
  int			react;
  int			sbml;
  int			species;
  int			specref;
  int			id1;
  int			name1;
  int			id2;
  int			name2;
  int			id3;
  int			name3;
  int			reversible3;
  int			compartment3;
  int			level4;
  int			version4;
  int			xmlns4;
  int			compartment5;
  int			id5;
  int			name5;
  int			species6;
  int			stoichiometry6;
}			t_sbml;

void	my_putchar(const char c);
void	my_putstr(const char *str);
int	my_strlen(const char *str);
int	parser(char **tab);
int	my_strcmp(const char *str, const char *cmp);
int	my_strcmp_mod(const char *str, const char *cmp);
t_sbml	init_struct(t_sbml tag);
void	write_react(t_sbml tag);
char	**list(char **av);
void	help(char **tab);
int	display_part(char **buffer, t_sbml tag);
int	display_part2(char **buffer, t_sbml tag);
int	noflag(char **av);
void	after_specref(char **tab, t_sbml tag);
void	after_comp(char **tab, t_sbml tag);
void	after_mod(char **tab, t_sbml tag);
void	after_react(char **tab, t_sbml tag);
void	after_sbml(char **tab, t_sbml tag);
void	after_species(char **tab, t_sbml tag);
char	**openfile(char **av);
int	not_alphanum(char c);
int	wordnb(char const *str);
void	select_word(char **tab, char const *str, int nb, t_word tag);
char	**my_strtowordtab(char const *str);

#endif /* !SBMLparser_H_ */
