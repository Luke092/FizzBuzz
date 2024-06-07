//
// Created by luca on 6/7/24.
//

#ifndef C_LINKEDLIST_H
#define C_LINKEDLIST_H


typedef struct node {
    char* content;
    struct node* next;
} node_t;

void add(node_t* root, node_t* node);
node_t* createNode(char* content);
void printList(node_t* root);

#endif //C_LINKEDLIST_H
