/*
#
# ANSI Color code (16colors) and Standard Predefined Macros
#

# Escape sequence
# \033[ ; m …… \033[0m  
#   e.g.
#    bg=Yellow, Bold, fg=Red
#     \033[1;33m Hello World. \033[1m


# Text attributes (ANSI)
#  \33[0m  All attributes off
#  \33[1m  Bold on
#  \33[4m  Underscore (on monochrome display adapter only)
#  \33[5m  Blink on
#  \33[7m  Reverse video on
#  \33[8m  Concealed on


# Foreground colors
#  0;30   Black          1;30   Dark Gray
#  0;34   Blue           1;34   Light Blue
#  0;32   Green          1;32   Light Green
#  0;36   Cyan           1;36   Light Cyan
#  0;31   Red            1;31   Light Red
#  0;35   Purple         1;35   Light Purple
#  0;33   Brown          1;33   Yellow
#  0;37   Light Gray     1;37   White


# Background colors
#  40   Black
#  41   Red
#  42   Green
#  43   Yellow
#  44   Blue
#  45   Magenta
#  46   Cyan
#  47   White
*/

#include "stdio.h"

int main(void)
{
	
	printf( "\033[1;31m hello word \033[0m  \n" );
	printf( "\033[40;31m hello word \033[0m \n" );

	printf("Date : %s\n", __DATE__);
	printf("Time : %s\n", __TIME__);
	printf("File : %s\n", __FILE__);
	printf("Line : %d\n", __LINE__);
	
}


