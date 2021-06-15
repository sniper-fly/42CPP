NAME = a.out
SRCS = main.cpp FragTrap.cpp
OBJS = $(SRCS:%.cpp=%.o)

CXX = clang++
# CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

execute:
	./$(NAME)

test: all execute fclean

.PHONY: all clean fclean re test execute
