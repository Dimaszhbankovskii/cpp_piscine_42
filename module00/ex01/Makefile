.PHONY : all clean fclean re

NAME		=	phonebook

CCPP		=	g++
CFLAGSCPP	=	-Wall -Werror -Wextra -std=c++98

RM			=	rm -rf

HEADER		=	Contact.hpp \
				Phonebook.hpp

SRCS		=	main.cpp \
				Contact.cpp \
				Phonebook.cpp

OBJS		=	$(SRCS:.cpp=.o)

NORMAL		=	\033[0m
BOLD		=	\033[1m
UNDERLINE	=	\033[4m
BLACK		=	\033[1;30m
RED			=	\033[1;31m
GREEN		=	\033[1;32m
YELLOW		=	\033[1;33m
BLUE		=	\033[1;34m
VIOLET		=	\033[1;35m
CYAN		=	\033[1;36m
WHITE		=	\033[1;37m

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CCPP) $(CFLAGSCPP) $^ -o $@
	@echo "$(GREEN)Project succesfully compiled$(NORMAL)"

%.o : %.cpp $(HEADER) Makefile
	@$(CCPP) $(CFLAGSCPP) -c $< -o $@
	@echo "$(BLUE)Creating object file$(WHITE) --> $(notdir $@) --> $(GREEN)[Done]$(NORMAL)"

clean :
	@$(RM) $(OBJS)
	@echo "delete objs file"

fclean : clean
	@$(RM) $(NAME)
	@echo "delete exe file"

re : fclean all
