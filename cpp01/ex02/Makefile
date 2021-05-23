default:
	clang++ -Wall -Wextra -Werror -o zom -g Zombie.cpp ZombieEvent.cpp main.cpp
#-std=c++98 
test: default
	./zom

clean:
	rm -rf ./zom
