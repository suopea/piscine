#!/bin/sh

## first argument is PROJECT number without zero
## second argument is EXERCISE number without zero

COLOR='\033[1;36m'
WHITE='\033[0m'

echo "\n  ${COLOR}  TEST FILE ${WHITE} \n"
cat ./c0$1/ex0$2/main.c

echo "\n\n"
echo "  ${COLOR}  EXERCISE FILE ${WHITE}\n"
cat ../c0$1/ex0$2/ft_*

echo "\n  ${COLOR}   NORMINETTE ${WHITE} \n"
norminette -R CheckForbiddenSourceHeader ../c0$1/ex0$2/ft_*

echo "\n\n"
cc -Wall -Wextra -Werror ../c0$1/ex0$2/ft_* ./c0$1/ex0$2/main.c && echo -e "\n\n ${COLOR}   OUTPUT ${WHITE} \n" && ./a.out

