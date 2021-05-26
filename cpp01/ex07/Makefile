
NAME = ft_sed
SRCS = main.cpp Replace.cpp
OBJS = $(SRCS:%.cpp=%.o)

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) *.replace

re: fclean all

.PHONY: all clean fclean re
