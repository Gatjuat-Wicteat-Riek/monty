#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * struct stack_st - This is a doubly linked list representation of
 * the stack (or queue) in the data structure.
 * @num: this is the integer to be returned.
 * @previ: this points to the previous element of the
 * stack or queue in DS.
 * @next: This points to the next element of the stack or queue in DS.
 * Description: This is a doubly linked list node structure present
 * for stack, queues.
 */
typedef struct stack_st
{
	int num;
	struct stack_st *previ;
	struct stack_st *next;
} stack_t;
/**
 * struct bus_st - This is the variables -args, file, line content in
 * the stack or queues.
 * @arg: This is the argumented value to be returned.
 * @file: This is a pointer to monty file present in the files.
 * @cont: This is the line content to be returned.
 * @lf: This is the flag change stack <-> queue present in the program.
 * Description: This is a carries values through the program which holds an information.
 */
typedef struct bus_st
{
	char *arg;
	FILE *fl;
	char *cont;
	int lf;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_st - This is the opcode and its function to
 * check how the program will be running.
 * @opcode: This is the opcode to be returned.
 * @fn: This is the function to handle the opcode operations.
 * Description: This is am opcode and its function to check the program
 * for stack, queues.
 */
typedef struct instruction_st
{
	char *opcode;
	void (*fn)(stack_t **stack, unsigned int number_line);
} instruction_t;

void f_pchar(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void f_rotl(stack_t **head, unsigned int counter);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int counter);
char  *clean_line(char *content);
void f_push(stack_t **head, unsigned int number);
void f_pall(stack_t **head, unsigned int number);
void f_pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
void f_pop(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void f_div(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);
#endif
