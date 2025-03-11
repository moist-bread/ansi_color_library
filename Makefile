# ******************************************************************** #
#																	   #
#		★☆★-‵,┊( ANSI_COLOR_LIBRARY )┊.´-★☆★						#
#																	   #
#																	   #
#		-‵,┊ contents:												   #
#			- ansi color use examples								   #
#			- ansi color swatch table								   #
#			- header defines copy table								   #
#			- MAKEFILE defines copy table							   #
#																	   #
# ******************************************************************** #

# ★☆★-‵,┊( NAMES )┊.´-★☆★
LIBRARY		=	ansi_color_library
EXAMPLES	=	use_examples
SWATCH		=	swatch_table
HEADER		=	header_defines
MAKEFILE	=	makefile_defines


# ★☆★-‵,┊( SOURCES AND OBJS )┊.´-★☆★
LIB_MAIN    =   lib_main.c 
EXP_MAIN    =   exp_main.c 
SWT_MAIN    =   swt_main.c 
HDR_MAIN    =   hdr_main.c 
MKF_MAIN    =   mkf_main.c 
SOURCES 	=	display_messages.c

SRCS_DIR = srcs
SRCS_LIB_MAIN	=	$(addprefix $(SRCS_DIR)/, $(LIB_MAIN))
SRCS_EXP_MAIN	=	$(addprefix $(SRCS_DIR)/, $(EXP_MAIN))
SRCS_SWT_MAIN	=	$(addprefix $(SRCS_DIR)/, $(SWT_MAIN))
SRCS_HDR_MAIN	=	$(addprefix $(SRCS_DIR)/, $(HDR_MAIN))
SRCS_MKF_MAIN	=	$(addprefix $(SRCS_DIR)/, $(MKF_MAIN))
SRCS			=	$(addprefix $(SRCS_DIR)/, $(SOURCES))

OBJS_DIR = objs
OBJS_LIB_MAIN	=	$(addprefix $(OBJS_DIR)/, $(LIB_MAIN:.c=.o))
OBJS_EXP_MAIN	=	$(addprefix $(OBJS_DIR)/, $(EXP_MAIN:.c=.o))
OBJS_SWT_MAIN	=	$(addprefix $(OBJS_DIR)/, $(SWT_MAIN:.c=.o))
OBJS_HDR_MAIN	=	$(addprefix $(OBJS_DIR)/, $(HDR_MAIN:.c=.o))
OBJS_MKF_MAIN	=	$(addprefix $(OBJS_DIR)/, $(MKF_MAIN:.c=.o))
OBJS			=	$(addprefix $(OBJS_DIR)/, $(SOURCES:.c=.o))


# ★☆★-‵,┊( COMMANDS AND FLAGS )┊.´-★☆★
CC = cc
CFLAGS = -Wall -Wextra -Werror


# ★☆★-‵,┊( MAIN RULES )┊.´-★☆★
all: $(LIBRARY) $(EXAMPLES) $(SWATCH) $(HEADER) $(MAKEFILE)

$(LIBRARY): $(OBJS_LIB_MAIN) $(OBJS)
	$(M_COMLIB)
	@$(CC) $(CFLAGS) $(OBJS_LIB_MAIN) $(OBJS) -o $(LIBRARY)

$(EXAMPLES): $(OBJS_EXP_MAIN) $(OBJS)
	$(M_COMEXP)
	@$(CC) $(CFLAGS) $(OBJS_EXP_MAIN) $(OBJS) -o $(EXAMPLES)

$(SWATCH): $(OBJS_SWT_MAIN) $(OBJS)
	$(M_COMSWT)
	@$(CC) $(CFLAGS) $(OBJS_SWT_MAIN) $(OBJS) -o $(SWATCH)

$(HEADER): $(OBJS_HDR_MAIN) $(OBJS)
	$(M_COMHDR)
	@$(CC) $(CFLAGS) $(OBJS_HDR_MAIN) $(OBJS) -o $(HEADER)

$(MAKEFILE): $(OBJS_MKF_MAIN) $(OBJS)
	$(M_COMMKF)
	@$(CC) $(CFLAGS) $(OBJS_MKF_MAIN) $(OBJS) -o $(MAKEFILE)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR):
	$(M_COMOBJS)
	@mkdir -p $(OBJS_DIR)


# ★☆★-‵,┊( STANDARD RULES )┊.´-★☆★
clean:
	$(M_REMOBJS)
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -rf $(LIBRARY)
	@rm -rf $(EXAMPLES)
	@rm -rf $(SWATCH)
	@rm -rf $(HEADER)
	@rm -rf $(MAKEFILE)
	$(M_REMLIB)
	$(M_REMEXP)
	$(M_REMSWT)
	$(M_REMHDR)
	$(M_REMMKF)

re:	fclean all
	$(M_RE)

.PHONY: all clean fclean re \
		exe_lib exe_examples exe_swatch exe_header exe_makefile test \


# ★☆★-‵,┊( EXECUTION RULES )┊.´-★☆★
exe_lib: $(LIBRARY)
	./ansi_color_library

exe_examples: $(EXAMPLES)
	./use_examples

exe_swatch: $(SWATCH)
	./swatch_table

exe_header: $(HEADER)
	./header_defines

exe_makefile: $(MAKEFILE)
	./makefile_defines


# ★☆★-‵,┊( COSMETICS )┊.´-★☆★

#-‵,┊ regular colors
BLK		=	\e[0;30m
RED		=	\e[0;31m
GRN		=	\e[0;32m
YEL		=	\e[0;33m
BLU		=	\e[0;34m
MAG		=	\e[0;35m
CYN		=	\e[0;36m
WHT		=	\e[0;37m

#-‵,┊ regular underline colors
UBLK	=	\e[4;30m
URED	=	\e[4;31m
UGRN	=	\e[4;32m
UYEL	=	\e[4;33m
UBLU	=	\e[4;34m
UMAG	=	\e[4;35m
UCYN	=	\e[4;36m
UWHT	=	\e[4;37m

#-‵,┊ regular bold colors
BBLK	=	\e[1;30m
BRED	=	\e[1;31m
BGRN	=	\e[1;32m
BYEL	=	\e[1;33m
BBLU	=	\e[1;34m
BMAG	=	\e[1;35m
BCYN	=	\e[1;36m
BWHT	=	\e[1;37m

#-‵,┊ high intensity colors
HBLK	=	\e[0;90m
HRED	=	\e[0;91m
HGRN	=	\e[0;92m
HYEL	=	\e[0;93m
HBLU	=	\e[0;94m
HMAG	=	\e[0;95m
HCYN	=	\e[0;96m
HWHT	=	\e[0;97m

#-‵,┊ bold high intensity colors
BHBLK	=	\e[1;90m
BHRED	=	\e[1;91m
BHGRN	=	\e[1;92m
BHYEL	=	\e[1;93m
BHBLU	=	\e[1;94m
BHMAG	=	\e[1;95m
BHCYN	=	\e[1;96m
BHWHT	=	\e[1;97m

#-‵,┊ regular background colors
BLKB	=	\e[40m
REDB	=	\e[41m
GRNB	=	\e[42m
YELB	=	\e[43m
BLUB	=	\e[44m
MAGB	=	\e[45m
CYNB	=	\e[46m
WHTB	=	\e[47m

#-‵,┊ high intensity background colors
BLKHB	=	\e[0;100m
REDHB	=	\e[0;101m
GRNHB	=	\e[0;102m
YELHB	=	\e[0;103m
BLUHB	=	\e[0;104m
MAGHB	=	\e[0;105m
CYNHB	=	\e[0;106m
WHTHB	=	\e[0;107m

#-‵,┊ reset
DEF		=	\e[0m

#-‵,┊ messages
M_COMOBJS	=	@echo "\n$(HBLK)-->┊$(GRN)  Compiling: $(MAG)$(LIBRARY)/objs $(HBLK)$(DEF)\n"
M_COMLIB	=	@echo "$(HBLK)-->┊$(GRN)  Compiling: $(DEF)$(MAGB) $(LIBRARY) $(HBLK)$(DEF)"
M_COMEXP	=	@echo "$(HBLK)-->┊$(GRN)  Compiling: $(DEF)$(YELHB) $(EXAMPLES) $(HBLK)$(DEF)"
M_COMSWT	=	@echo "$(HBLK)-->┊$(GRN)  Compiling: $(DEF)$(CYNHB) $(SWATCH) $(HBLK)$(DEF)"
M_COMHDR	=	@echo "$(HBLK)-->┊$(GRN)  Compiling: $(DEF)$(BLUB) $(HEADER) $(HBLK)$(DEF)"
M_COMMKF	=	@echo "$(HBLK)-->┊$(GRN)  Compiling: $(DEF)$(MAGHB) $(MAKEFILE) $(HBLK)$(DEF)"

M_REMOBJS	=	@echo "$(HBLK)-->┊$(BLU)  Removing: $(MAG) $(LIBRARY)/objs $(HBLK)$(DEF)\n"
M_REMLIB	=	@echo "$(HBLK)-->┊$(BLU)  Removing:  $(DEF)$(MAGB) $(LIBRARY) $(HBLK)$(DEF)"
M_REMEXP	=	@echo "$(HBLK)-->┊$(BLU)  Removing:  $(DEF)$(YELHB) $(EXAMPLES) $(HBLK)$(DEF)"
M_REMSWT	=	@echo "$(HBLK)-->┊$(BLU)  Removing:  $(DEF)$(CYNHB) $(SWATCH) $(HBLK)$(DEF)"
M_REMHDR	=	@echo "$(HBLK)-->┊$(BLU)  Removing:  $(DEF)$(BLUB) $(HEADER) $(HBLK)$(DEF)"
M_REMMKF	=	@echo "$(HBLK)-->┊$(BLU)  Removing:  $(DEF)$(MAGHB) $(MAKEFILE) $(HBLK)$(DEF)"

M_RE = @echo "\n$(HBLK)-->┊$(BCYN)  Re-Doing:  $(DEF)$(MAGB) $(LIBRARY) $(HBLK)$(DEF)"