NAME = a.out
SRCS = main.cpp
SRCS += Animal.cpp
SRCS += Cat.cpp
# SRCS += Dog.cpp
# SRCS += WrongAnimal.cpp
# SRCS += WrongCat.cpp

OBJS = $(SRCS:%.cpp=%.o)

CXX = clang++
ifdef debug
CXX = g++
endif

CXXFLAGS = -Wall -Wextra -Werror -g
ifdef sanitize
CXXFLAGS += -fsanitize=address
endif

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
