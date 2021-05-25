NAME = brain
SRCS = main.cpp Brain.cpp Human.cpp

compile:
	clang++ -Wall -Wextra -Werror -g -o $(NAME) $(SRCS)

test: compile
	./$(NAME)

clean:
	rm -rf $(NAME)
