# Hash Tales
In this project I am learning about hash tables and implementing them in C.

A _hash table_ is a data structure that maps keys to values. It uses a __hash__ funciton to calculate the index for the data key and the key is stored in the index.

## Requirements
### General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called __hash_tables.h__
* Don’t forget to push your header file
* All your header files should be include guarded

## Files
|File		       |prototype                                                                |Description     	       |
|----------------------|-------------------------------------------------------------------------|------------------------------|
|0-hash_table_create.c |hash_table_t * hash_table_create(unsigned long int size);                |Creates a hash table          |
|1-djb2.c              |unsigned long int hash_djb2(const unsigned char * str);                  |implements the djb2 algorithm |
|2-key_index.c	       |unsigned long int key_index(unsigned char * key, unsigned long int size);|returns the index of a key    |


Author: Sangwani P Zyambo <sangwanizyambo@gmail.com>
