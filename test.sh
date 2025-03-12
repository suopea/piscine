#!/bin/sh

## first argument is PROJECT number without zero
## second argument is EXERCISE number without zero

UNDERLINE='\033[4;37m'
RED='\033[1;31m'
WHITE='\033[0m'

echo "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"

rm a.out
mkdir temp
cp ./c$1/ex$2/* temp
cp ../c$1/ex$2/* temp

cat ../s/c$1/ex$2/* | pygmentize -l c -O style=monokai | sed 's/\t/    /g'

echo "\n\n\n\n\n\n\n\n\n"

cc -Wall -Wextra -Werror -fsanitize=address -fsanitize=leak -fsanitize=undefined -ggdb3 ./temp/* && ./a.out

echo "\n\n\n${UNDERLINE}                                                                      TEST FILE${WHITE} \n\n"

cat ./c$1/ex$2/* | pygmentize -l c -O style=monokai | sed 's/\t/    /g'

echo "\n\n\n${UNDERLINE}                                                                  EXERCISE FILE${WHITE}\n\n"

cat ../c$1/ex$2/* | pygmentize -l c -O style=monokai | sed 's/\t/    /g'

echo "\n\n\n${UNDERLINE}                                                                     NORMINETTE${WHITE} \n\n"

norminette -R CheckForbiddenSourceHeader ./temp/ft*.c | grep -v "no such" | grep -v "gch"
norminette -R CheckDefine ./temp/ft*.h | grep -v "no such" | grep -v "gch"

## | sed 's/Error*/Error\o033[1;31m/' | sed 's/OK!/\o033[1;32m OK!/'

echo "\n\n\n${UNDERLINE}                                                                         OUTPUT${WHITE} \n\n" 

cc -g -Wall -Wextra -Werror ./temp/* && valgrind --show-leak-kinds=all --track-fds=yes ./a.out

cat ../c$1/ex$2/* | grep ".h>" | sed 's/$/ \o033[1;31mEXTERNAL LIBRARY:\o033[0m is it allowed?/' | sed 's/#include/\n/'

echo "\n\n${UNDERLINE}                                                                    ${WHITE}  c$1 ex$2\n"
rm -rf temp | grep -v "no such"
find ../c$1/ex$2/* | grep -v "no such"
find ./c$1/ex$2/* | grep -v "no such"
echo "\n"
