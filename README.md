# piscine

Tests for hive piscine


# Evaluating

1. `git clone` the code to be evaluated, **giving it a name cXX**, so lowercase c and the project number. Otherwise the tests won't work. For example `git clone URL_FROM_INTRA c01`
2. Without changing directory after the previous clone, clone the tests using `git clone https://github.com/suopea/piscine testbest` (test program should work with any name for this)

cXX and testbest should now be in the same directory

3. These automated tests won't check if there are any unnecessary files in the evaluated repository. Check that there are no unnecessary files on the evaluated repository manually
4. `cd` to the **test repository**. The test program only works when run from its own repository

## Testing

For example c01, ex05, run `sh test.sh 01 05`. So first argument is project number, second argument is exercise number. After compilation give arguments to `./a.out` if needed.

The script will create a temporary folder for all files. If there are any a.out files, it will mess up the test. 
`find -name a.out -exec rm {} \;` should remove all a.out files from where you are and all subdirectories. 

## Debugging

The `test.sh` always runs with the -g flag, so you can use `valgrind` or `gdb` after running. Above the test .c file you see the output of `cc -fsanitize=address -fsanitize=leak -fsanitize=undefined`



So the structure should be:

``` 
some dir / c01 (the repo of the evaluated) / ex00, ex01 etc
some dir / testbest (this repo) / c01, c02 etc / ex00, ex01 etc
```

For easier testing, you can run `alias tt='sh test_function.sh'`. After that you can do for example `tt 01 05`
