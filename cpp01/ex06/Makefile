
NAME = weapon
SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

compile:
	clang++ -Wall -Wextra -Werror -g -o $(NAME) $(SRCS)

exec:
	./$(NAME)

test: compile exec clean

clean:
	rm -rf $(NAME)
