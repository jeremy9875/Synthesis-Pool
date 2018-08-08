##
## Makefile for Makefile in /home/jeremy.elkaim/ADM_FASTAtools_2016
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Mon Jun 19 09:02:50 2017 jeremy elkaim
## Last update Tue Jun 20 11:29:40 2017 jeremy elkaim
##

NAME		=	FASTAtools

CC		=	gcc

SRC		=	src/main.c		\
			src/parser.c		\
			src/str/write.c		\
			src/opt.c		\
			src/opt_next.c		\
			src/parser_last.c	\
			src/help.c		\
			src/str/my_strcmp.c	\
			src/parser_next.c

OBJ		=	$(SRC:.c=.o)

TMP		=	$(SRC:.c=.c~)

RM		=	rm -rf

CFLAGS		+=	-Wall -Wextra -Werror

CPPFLAGS	+=	-I ./include/

all		:	$(NAME)

$(NAME)		:	$(OBJ)
			$(CC) -o $(NAME) $(OBJ)

clean		:
			$(RM) $(OBJ)
			$(RM) $(TMP)

fclean		:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re
