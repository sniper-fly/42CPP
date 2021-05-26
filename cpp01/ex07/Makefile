
NAME = replace
SRCS = main.cpp Replace.cpp

compile:
	clang++ -Wall -Wextra -Werror -g -o $(NAME) $(SRCS)

exec:
	./$(NAME)

test: compile exec clean

clean:
	rm -rf $(NAME)
