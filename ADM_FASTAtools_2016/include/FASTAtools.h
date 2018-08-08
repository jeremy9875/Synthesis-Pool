/*
** FASTAtools.h for FASTAtools in /home/jeremy.elkaim/ADM_FASTAtools_2016
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 19 09:04:31 2017 jeremy elkaim
** Last update Tue Jun 20 19:08:41 2017 jeremy elkaim
*/

#ifndef FASTAtools_H_
# define FASTAtools_H_

# define	INV_ARG		"invalid argument -h for help\n"
# define	ERROR_OPEN	"invlid file -h for help\n"
# define	ARG1		"1"
# define	ARG2		"2"
# define	ARG3		"3"
# define	ARG4		"4"
# define	ARG5		"5"
# define	ARG6		"6"
# define	ARG7		"7"
# define	HELP		"-h"
# define	HELP1		"USAGE\n\t"
# define	HELP2		" option [k]\n\n DESCRIPTION\n\t"
# define	HELP3		"option 1:read FASTA from the standard inpu"
# define	HELP4		"t, write the DNA sequences\n\t       to the"
# define	HELP5		" standard output.\n\t       "
# define	HELP6		"2:read FASTA from the standard inpu"
# define	HELP7		"t, write the RNA sequences\n\t       to the"
# define	HELP8		" standard output.\n\t       "
# define	HELP9		"3:read FASTA from the standard inpu"
# define	HELP10		"t, write the reverse complement\n\t"
# define	HELP11		"       to the standard output.\n\t       "
# define	HELP12		"4:read FASTA from the standard inpu"
# define	HELP13		"t, write the k-mer list\n\t       to the"
# define	HELP14		" standard output.\n\t       "
# define	HELP15		"5:read FASTA from the standard inpu"
# define	HELP16		"t, write the coding sequences"
# define	HELP17		" list\n\t       to the standard output."
# define	HELP18		"\n\t       "
# define	HELP19		"6:read FASTA from the standard inpu"
# define	HELP20		"t, write the amino acids list"
# define	HELP21		"\n\t       to the standard output.\n\t"
# define	HELP22		"\n\t       "
# define	HELP23		"7:read FASTA from the standard inpu"
# define	HELP24		"t containing exactly 2 sequences, align th"
# define	HELP25		"em\n\t       size of the k-mers for option 4\n"

typedef struct		s_it
{
  int			i;
  int			j;
  char			*buffer;
}			t_it;

int	opt1(t_it *tag);
int	disp_buffer(char *buffer);
char	*my_revstr(char *str);
char	*parserfasta2_p2(char *buf, t_it *tag);
char	*fastaparser_p2(char *buf, t_it *tag);
void	init_struct(t_it *tag);
int	low_letter(char c);
int	up_letter(char c);
int	low_letters(char c);
int	up_letters(char c);
int	is_alphanum(char c);
int	tletter(char c);
int	opt2(t_it *tag);
int	opt3();
int	opt4();
int	opt5();
int	opt6();
int	opt7();
int	parsefasta(t_it *tag);
int	parsefasta2(t_it *tag);
char	*check_stack(char *buff, char *stack);
char	*my_strncpy(const char *src, int i, char *dest);
char	*my_strcpy(const char *str, char *dest);
int	verif_buff(char *buf);
void	*x_malloc(int size);
char	*my_memset(char *mal, const char c, int size);
char	*read_it();
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(char *str);
int	my_strcmp(const char *str, const char *cmp);
char	*get_next_line(const int fd);
int	my_strcmp_mod(const char *str, const char *cmp);
int	my_strcmp_modified(const char str, const char cmp);
int	parser(char **tab, t_it *tag);
void	help(char **av);

#endif /* !FASTAtools_H_ */
