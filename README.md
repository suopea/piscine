# piscine

Tests for hive piscine


# Evaluating

1. `git clone` the code to be evaluated, **giving it a name cXX**, so lowercase c and the project number. Otherwise the tests won't work. For example `git clone URL_FROM_INTRA c01`
2. Without changing directory after the previous clone, clone the tests using `git clone https://github.com/suopea/piscine testbest` (test program should work with any name for this)
3. These automated tests won't check if there are any unnecessary files in the evaluated reaository. Check that there are no unnecessary files on the evaluated repository manually 
4. `cd` to the **test repository**. The test program only works when run from its own repository

## Testing functions

If you're testing a function, not a program, for example c01, ex05, run `sh test_function.sh 01 05`. So first argument is project number, second argument is exercise number. For programs, run `sh test_program 06 00` and after compilation give arguments to `./a.out` if needed

## Testing programs

For programs you can use `sh test_program.sh`, but after that you need to give arguments to `./a.out` yourself 

## Debugging

The `test_function.sh` always runs with the -g flag, so you can use `valgrind` or `gdb` after running. The `debug_function.sh` runs with `-fsanitize=address -fsanitize=leak -fsanitize=undefined`



So the structure should be:

``` 
some dir / c01 (the repo of the evaluated) / ex00, ex01 etc
some dir / testbest (this repo) / c01, c02 etc / ex00, ex01 etc
```

For easier testing, you can run `alias tt='sh test_function.sh'`. After that you can do for example `tt 01 05`
