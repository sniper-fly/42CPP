NAME = convert
SRCS = main.cpp

OBJS = $(SRCS:%.cpp=%.o)

CXX = clang++
ifdef debug
CXX = g++
endif

CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98
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
