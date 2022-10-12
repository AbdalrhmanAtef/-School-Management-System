#ifndef BINARY.FILE
#define BINARY.FILE

#include "nameID.h"
#include <string.h>
struct node
{
    nameID* data; //node will store a pointer to nameID struct
    struct node *right_child; // right child
    struct node *left_child; // left child
};
struct node* search(struct node *root, char* x); //function to search for data in nameID
struct node* find_minimum(struct node *root); //function to find the minimum value in a node
struct node* new_node(nameID* x);//function to create a node
struct node* insert(struct node *root, nameID* x); //inserting in tree function
struct node* delete(struct node *root, nameID* x); //deleting data from tree function

#endif // BINARY
