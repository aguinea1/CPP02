################################################################################
#                              CONFIGURATION                                   #
################################################################################

NAME			= △△△△

CC				= c++
CFLAGS			= -Wall -Wextra -Werror  -std=c++98 -MMD
DEPFLAGS		= -MMD -MF $(DEPDIR)/$*.d

SRCDIR			= src
OBJDIR			= obj
DEPDIR			= deps

################################################################################
#                              SOURCE FILES                                    #
################################################################################

SRCS = main.cpp			\
	   Fixed.cpp		\
	   Point.cpp

HEADERS = Fixed.hpp		\
		  Point.hpp

################################################################################
#                             OBJECTS & DEPS                                   #
################################################################################

OBJS			= $(SRCS:%.cpp=$(OBJDIR)/%.o)
DEPS			= $(OBJS:%.o=$(DEPDIR)/%.d)

################################################################################
#                              RULES                                           #
################################################################################

all: dir $(NAME)

$(NAME): Makefile $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@
	@echo "\033[1;32m ➜ ➜ CPP02 EX03 [✔]\033[0m"


$(OBJDIR)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(dir $@) $(dir $(DEPDIR)/$*.d)
	@$(CC) $(CFLAGS) $(DEPFLAGS) $(INCLUDE) -c $< -o $@

dir:
	@mkdir -p $(OBJDIR) $(DEPDIR)

clean:
	@rm -rf $(OBJDIR) $(DEPDIR)
	@echo "\033[1;32m ♻ CHAUUU ♻\033[0m"

fclean: clean
	@rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re dir

