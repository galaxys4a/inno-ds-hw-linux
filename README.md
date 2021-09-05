# Inno DataScience course - Homework Linux

## How to compile and execute
```shell
gcc homework_1_<EXERCISE_NUMBER>_ziniln.c -o out
./out [parameters]
```

### Exercise 1
There are 2 parameters:
```n``` - number of iterations;
```seconds``` - amount of seconds to pass as an argument to the sleep function.

Default values:
```n = 5```
```seconds = 5```

Examples of usage:
```shell
./out
./out 3 1
```

### Exercise 2
There is one parameter:
```command``` - shell command.

Examples of usage:
```shell
./out ls
./out "ls -l"
./out pwd
```
