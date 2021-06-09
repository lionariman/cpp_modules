// <====> COLORS <====>

NCLR        = \033[0m
BLACK       = \033[0;30m
RED         = \033[0;31m
GREEN       = \033[0;32m
BROWN       = \033[0;33m
BLUE        = \033[0;34m
PURPLE      = \033[0;35m
CYAN        = \033[0;36m
BOLD_GRAY   = \033[0;37m
DARK_GRAY   = \033[1;30m
BOLD_GREEN  = \033[1;31m
BOLD_GREEN  = \033[1;32m
YELLOW      = \033[1;33m
BOLD_BLUE   = \033[1;34m
BOLD_PURPLE = \033[1;35m
BOLD_CYAN   = \033[1;36m
WHITE       = \033[1;37m

// <====> COLORS <====>

compile = clang++ -Wall -Wextra -Werror

sources = main.cpp \
		  AWeapon.cpp \
		  PlasmaRifle.cpp \
		  PowerFist.cpp \
		  Enemy.cpp \
		  SuperMutant.cpp \
		  RadScorpion.cpp \
		  Character.cpp

objects = $(sources:.cpp=.o)

.cpp.o:
	@ $(compile) -o $@ -c $^
	@ echo "$(BLUE)[$^ $(BROWN) ...is compiled]$(NCLR)"

all: $(objects)
	@ $(compile) $(sources)
	@ echo "$(GREEN)[<==> SUCCESS <==>]$(NCLR)"

clean:
	@ rm -f $(objects)
	@ echo "$(BROWN)[Objects: $(PURPLE)$(objects)$(BROWN) have been removed]$(NCLR)"

fclean: clean
	@ rm -f a.out
	@ echo "$(BROWN)[Binary: $(PURPLE)a.out$(BROWN) has been removed]$(NCLR)"

re: fclean all

.PHONY: all clean fclean re
