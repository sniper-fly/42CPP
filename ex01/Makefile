
NAME = crappy

CXX	= clang++
CXXFLAGS = -Wall -Wextra -Werror

SRCS = crappy.cpp
OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) 

re: fclean all

.PHONY: all clean fclean re
