#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "LinkedList.h"

void add(node_t* root, node_t* node){
    node_t* el = root;

    while(el->next != NULL){
        el = el->next;
    }
    el->next = node;
}

node_t* createNode(char* content){
    node_t* el = (node_t *) malloc(sizeof(node_t));
    el->content = content;
    return el;
}

void printList(node_t* root){
    if(root == NULL){
        return;
    }

    printf("[%s", root->content);
    node_t *tmp = root->next;
    while (tmp != NULL) {
        printf(", %s", tmp->content);
        tmp = tmp->next;
    }
    printf("]");
}