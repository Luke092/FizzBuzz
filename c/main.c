#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <math.h>
#include "LinkedList.h"

node_t* fizzBuzz(int n) {
    node_t *root = NULL;
    for (int i = 1; i <= n; i++) {
        char* el;
        if(i % 3 == 0 && i % 5 == 0){
            el = "FizzBuzz";
        }
        else if(i % 3 == 0){
            el = "Fizz";
        }
        else if(i % 5 == 0){
            el = "Buzz";
        }
        else {
            el = malloc(sizeof(char) * (int) log10(i));
            sprintf(el, "%d", i);
        }

        if (root == NULL) {
            root = createNode(el);
        } else {
            add(root, createNode(el));
        }
    }
    return root;
}

int main(void) {
    printf("Example 3:\n");
    node_t* res = fizzBuzz(3);
    printList(res);
    printf("\n");

    printf("Example 3:\n");
    res = fizzBuzz(5);
    printList(res);
    printf("\n");

    printf("Example 3:\n");
    res = fizzBuzz(15);
    printList(res);
    printf("\n");

    return 0;
}
