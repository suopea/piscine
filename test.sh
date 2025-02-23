## first argument is PROJECT number without zero
## second argument is EXERCISE number without zero

COLOR='\033[1;36m'
WHITE='\033[0m'

echo -e "\n  ${COLOR}  TEST FILE ${WHITE} \n"
cat ./c0$1/ex0$2/main.c

echo -e "\n\n"
echo -e "  ${COLOR}  EXERCISE FILE ${WHITE}\n"
cat ../c0$1/ex0$2/ft_*

echo -e "\n  ${COLOR}   NORMINETTE ${WHITE} \n"
norminette -R CheckForbiddenSourceHeader ../c0$1/ex0$2/ft_*

echo -e "\n\n"
cc -Wall -Wextra -Werror ../co$1/ex0$2/ft_* ./c0$1/ex0$2/main.c && echo -e "\n\n ${COLOR}   OUTPUT ${WHITE} \n" && ./a.out

