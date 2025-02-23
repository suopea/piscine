#!/bin/sh

## first argument is PROJECT number without zero
## second argument is EXERCISE number without zero

COLOR='\033[1;36m'
WHITE='\033[0m'

echo "\n  ${COLOR}   TEST FILE ${WHITE} \n"
cat ./c$1/ex$2/main.c

echo "\n  ${COLOR}   EXERCISE FILE ${WHITE}\n"
cat ../c$1/ex$2/ft_*

echo "\n  ${COLOR}   NORMINETTE ${WHITE} \n"
norminette -R CheckForbiddenSourceHeader ../c$1/ex$2/ft_*

cc -Wall -Wextra -Werror ../c$1/ex$2/ft_* ./c$1/ex$2/main.c && echo "\n ${COLOR}    OUTPUT ${WHITE} \n" && ./a.out

