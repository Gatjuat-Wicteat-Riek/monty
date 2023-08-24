# 0x19. C - Stacks, Queues - LIFO, FIFO
In this project, i learnt about stack, queues and many other. Completing this project is a clean privillege to me and understand fully 
how they work and operate.
## objectives of this project.
What do LIFO and FIFO mean
What is a stack, and when to use it
What is a queue, and when to use it
What are the common implementations of stacks and queues
What are the most common use cases of stacks and queues
What is the proper way to use global variables

### Resource:
* [Difference between Stack and Queue Data Structures](https://www.geeksforgeeks.org/difference-between-stack-and-queue-data-structures/) || 
## General Instructions
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=c89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You allowed to use a maximum of one global variable
No more than 5 functions per file
You are allowed to use the C standard library
The prototypes of all your functions should be included in your header file called monty.h
Don’t forget to push your header file
All your header files should be include guarded
You are expected to do the tasks in the order shown in the project
```

## List of files/Descriptions:
| S/N   |   Files      		|      Description     |
|:-----:|--------------------:|--------------------|
|  1.   |                      |              |
|  2.   |		|			|
|  3.   |		|		|
|  4.   |		|			|
|  5.   |		|		|

## Compilation & Output
* These codes were compiled using: ```gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty```
* Any output must be printed on ```stdout```
* Any error message must be printed on ```stderr```

## Examples
```
julien@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
julien@ubuntu:~/monty$
```
Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:
```
julien@ubuntu:~/monty$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
julien@ubuntu:~/monty$
```
* Some examples of using monty and its console output.

|                        Example #1                      |                    Example #2                   |                      Example #3                           |
## Authors/Collaborators
[Gatjuat-Wiceat-Riek](https://github.com/Gatjuat-Wicteat-Riek/monty/)
