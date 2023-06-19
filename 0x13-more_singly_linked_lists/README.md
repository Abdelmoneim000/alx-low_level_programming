# More singly linked lists:

## what are linked lists :

 1. linked lists are struct type in C.
 2. they contain a node and a pointer to the next node.
 2. they are used in algorithms.
 3. one of the data structures.

## Example of a struct type linked list.
```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

*hope everything is clear*
-----------------