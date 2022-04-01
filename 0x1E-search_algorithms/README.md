# Search Algorithms
In this project I will be learning and about search algorithms and implementing them in the C language.
## General
- What is a search algorithm
- What is a linear seach
- What is a binary search
- What is the best search algorithm to use depending on your needs
## Search Algorithm
A seach algorithm is an algorithm which solves a search problem. They work to retrieve information stored within some data structure, or calculated in the search space of a problem, with either discrete or continous values.

## Tasks
* **0. Linear search**
[0-linear.c](./0-linear.c): Searches for a value in an array of integers using the linear search algorithm.
- prototype: **int linear\_search(int \*array, size_t, int value)**;
- Compiiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- The code should pass **Betty** style

* **1. Binary search**
[1-binary.c](./1-binary.c): Searches for a value in a sorted array of integers using the Binary search algorithm.
- prototype: **int binary\_search(int \*array, size_t, int value)**;
- Compiiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

## Big O Tasks
In this project I also answered questions about search algoritms time and space  complexities.

* **Time complexity** (worst case) of a linear search in an array of size _n_.
* **Space complexity** (worst case) of an iteratiev linear search algorithm in an array of size _n_.
* **Time complexity** (worst case) of a binary search in an array of size _n_.
* **Space complexity** (worst case) of a binary search in an array of size _n_.

## How to find time complexity of an algorithm?
Finding out the time complexity of your code can help you develop better programs that run faster. You can determine the time complexity of a program by analyzing the program's statements (go line by line).
The most common metric used to calculate time complexity is using Big O notation.
