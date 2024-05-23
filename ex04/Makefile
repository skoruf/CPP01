CC = c++
NAME= Replace
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
VALGRIND = valgrind --leak-check=full --show-leak-kinds=all --track-fds=yes
#DEPS = Zombie.hpp

%.o: %.cpp $(DEPS)
	@$(CC) $(FLAGS) -c $< -o $@
all: $(NAME)

$(NAME): $(OBJ)
	@echo "\e[1;35m compiling cpp files \e[0m"
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	@echo "\e[0;36m cleaning obj files \e[0m"
	@rm -rf *.o

fclean: clean
	@echo "\e[1;36m cleaning obj files and binary \e[0m"
	@rm -rf $(NAME)
re: fclean all

tests: all test1 test2 test3

test1: all
	@echo "\e[1;35m testing with Makefile: replace @ with Q \e[0m"
	@cat Makefile >test1.txt
	@$(VALGRIND) ./$(NAME) test1.txt @ Q

test2: all
	@echo "\e[1;35m testing with Makefile: replace @ with | \e[0m"
	@cat Makefile >test2.txt
	@$(VALGRIND) ./$(NAME) test2.txt @ "|"

test3: all
	@echo "\e[1;35m testing with Makefile: replace @ with BOOGER \e[0m"
	@cat Makefile >test3.txt
	@$(VALGRIND) ./$(NAME) test3.txt @ BOOGER

.PHONY: clean fclean re


