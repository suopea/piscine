#!/bin/sh

## first argument is PROJECT number without zero
## second argument is EXERCISE number without zero

COLOR='\033[4;37m'
WHITE='\033[0m'

echo "\n\n${COLOR}                                                                      TEST FILE${WHITE} \n"
cat ./c$1/ex$2/*.c | pygmentize -l c -O style=monokai | sed 's/\t/    /g'

echo "\n\n${COLOR}                                                                  EXERCISE FILE${WHITE}\n"
cat ../c$1/ex$2/* | pygmentize -l c -O style=monokai | sed 's/\t/    /g'

echo "\n\n${COLOR}                                                                     NORMINETTE${WHITE} \n"
norminette -R CheckForbiddenSourceHeader ../c$1/ex$2/*

echo "\n\n${COLOR}                                                                         OUTPUT${WHITE} \n" 
cc -Wall -Wextra -Werror ../c$1/ex$2/* ./c$1/ex$2/*.c && ./a.out

