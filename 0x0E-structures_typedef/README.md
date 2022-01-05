# C - Structures, typedef

In this project, I learned on how to use C structs and typedef.

## Header File:

* [dog.h](./dog.h): Header file containing definitions and prototypes for all types
and functions written in the project.

| Type/File      | Definition/Prototype                          		            |
| 'struct dog'   | <ul><li>'char *name'</li><li>'float age'</li><li>'char *owner'</li></ul> |
| 'typedef dog_t | 'struct dog'								    |
| '1-init_dog.c' | 'void init_dog(struct dog *d, char *name, float age, char *owner);'      |
| '2-print_dog.c | 'void print_dog(struct dog *d);'					    |
| '4-new_dog.c'  | 'dog_t *new_dog(char *name, float age, char *owner);'	            |
| '5-free_dog.c  | 'void free_dog(dog_t *d);' 						    |

## Tasks
* **0. Poppy**
	* [dog.h](./dog.h): Header file that defines a new type 'struct dog' with the
	following elements:
	* 'char *name'
	* 'float age'
	* 'char *owner'
* **1. A dog is only thing on earth that loves you more than you yourself**
	* [1-init_dog.c](./1-init_dog.c): C function that initializes a variable of type 'struct dog'.

* **2. A dog will teaach you unconditional love. If you can have that in your life, things won't be too bad**
	* [2-print_dog.c](./2-print_dog.c): C function that prints a 'struct dog'.
	* If an element of 'd' is 'NULL' the function prints '(nil)'.
	* If 'd' is 'NULL' the function prints nothing.
* **3. Outside of a dog, a book is a man's best friend, Inside of a dog it's too had to read.**
	* [dog.h](./dog.h): Header file that defines a new type 'dog_t' as a new name for the 'struct dog'.

* **4. A door is what a dog is perpetually on the wrong side of.**
	* [4-new_dog.c](./4-new_dog.c): C function that creates a dog.
	* Returns 'NULL' if the function fails.

* **5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg**
	* [5-free_dog.c](./5-free_dog.c): C function that frees dogs.

