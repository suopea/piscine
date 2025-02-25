#!/bin/sh

## first argument is PROJECT number without zero
## second argument is EXERCISE number without zero

COLOR='\033[4;37m'
WHITE='\033[0m'

echo "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
echo "\n\n\n${COLOR}                                                                      TEST FILE${WHITE} \n\n"
cat ./c$1/ex$2/*.c | pygmentize -l c -O style=monokai | sed 's/\t/    /g'

echo "\n\n\n${COLOR}                                                                  EXERCISE FILE${WHITE}\n\n"
cat ../c$1/ex$2/*.c | pygmentize -l c -O style=monokai | sed 's/\t/    /g'

echo "\n\n\n${COLOR}                                                                     NORMINETTE${WHITE} \n\n"
norminette -R CheckForbiddenSourceHeader ../c$1/ex$2/*.c

echo "\n\n\n${COLOR}                                                                         OUTPUT${WHITE} \n\n" 
cc -Wall -Wextra -Werror ../c$1/ex$2/*.c ./c$1/ex$2/*.c && ./a.out

echo "\n\n${COLOR}                                                                    ${WHITE}  c$1 ex$2\n"
