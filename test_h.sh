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
cat ../c$1/ex$2/*.h | sed 's/\t/    /g'

echo "\n\n\n${UNDERLINE}                                                                     NORMINETTE${WHITE} \n\n"
norminette -R CheckDefine ../c$1/ex$2/*.h | sed 's/Error*/Error\o033[1;31m/' | sed 's/OK!/\o033[1;32m OK!/'

cp ../c$1/ex$2/*.h ./c$1/ex$2/

echo "\n\n\n${UNDERLINE}                                                                         OUTPUT${WHITE} \n\n" 
cc -Wall -Wextra -Werror -fsanitize=address -fsanitize=leak -fsanitize=undefined -ggdb3 ./c$1/ex$2/*.h ./c$1/ex$2/*.c

echo "\n\n"

cc -g -Wall -Wextra -Werror ./c$1/ex$2/*.h ./c$1/ex$2/*.c && valgrind ./a.out


echo "\n\n${UNDERLINE}                                                                    ${WHITE}  c$1 ex$2\n"

rm ./c$1/ex$2/*.h
rm ./c$1/ex$2/*.gch
rm ../c$1/ex$2/*.gch
find ../c$1/ex$2/*
find ./c$1/ex$2/*
echo "\n"
