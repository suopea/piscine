#!/bin/sh

## first argument is PROJECT number without zero
## second argument is EXERCISE number without zero

UNDERLINE='\033[4;37m'
RED='\033[1;31m'
WHITE='\033[0m'

echo "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"

cat ../s/c$1/ex$2/*.c | pygmentize -l c -O style=monokai | sed 's/\t/    /g'

echo "\n\n\n\n\n\n\n\n\n"

echo "\n\n\n${UNDERLINE}                                                                      TEST FILE${WHITE} \n\n"
cat ./c$1/ex$2/*.c | pygmentize -l c -O style=monokai | sed 's/\t/    /g'

echo "\n\n\n${UNDERLINE}                                                                  EXERCISE FILE${WHITE}\n\n"
cat ../c$1/ex$2/*.c | pygmentize -l c -O style=monokai | sed 's/\t/    /g'

echo "\n\n\n${UNDERLINE}                                                                     NORMINETTE${WHITE} \n\n"
norminette -R CheckForbiddenSourceHeader ../c$1/ex$2/*.c | sed 's/Error*/Error\o033[1;31m/' | sed 's/OK!/\o033[1;32m OK!/'

echo "\n\n\n${UNDERLINE}                                                                         OUTPUT${WHITE} \n\n" 
cc -Wall -Wextra -Werror ../c$1/ex$2/*.c ./c$1/ex$2/*.c && ./a.out

cat ../c$1/ex$2/*.c | grep "#include" | sed 's/$/ \o033[1;31mEXTERNAL LIBRARY:\o033[0m is it allowed?/' | sed 's/#include/\n/'

echo "\n\n${UNDERLINE}                                                                    ${WHITE}  c$1 ex$2\n"

find ../c$1/ex$2/*.c
find ./c$1/ex$2/*.c
echo "\n"
