##
## Makefile for Makefile in /home/jeremy.elkaim/ADM_projTester_2016
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Wed Jun 21 09:30:59 2017 jeremy elkaim
## Last update Sat Jun 24 14:14:35 2017 jeremy elkaim
##

NAME		=	projTester

CC		=	gcc -g3

SRC		=	src/main.c		\
			src/parser.c		\
			src/str/write.c		\
			src/search_bft.c	\
			src/str/write_bis.c

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
