NAME = zombie_horde

compile:
	clang++ -Wall -Wextra -Werror -g -o $(NAME) Zombie.cpp ZombieHorde.cpp main.cpp

test: compile
	./$(NAME)

clean:
	rm -rf $(NAME)
