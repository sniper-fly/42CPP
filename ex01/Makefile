
NAME = crappy

CXX	= clang++
CXXFLAGS = -Wall -Wextra -Werror

SRCS = $(shell find . -type f -name "*.cpp")
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) 

re: fclean all

test: all
	./$(NAME)

.PHONY: all clean fclean re test
