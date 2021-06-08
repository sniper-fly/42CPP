NAME = fixed
SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:%.cpp=%.o)

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -g
ifeq ($(DEBUG_MAKE),1)
CXX = g++
CXXFLAGS += -D DEBUG=1
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

exec:
	./$(NAME)

debug:
	make fclean
	make all DEBUG_MAKE=1

test: all execute fclean

.PHONY: all clean fclean re test exec
