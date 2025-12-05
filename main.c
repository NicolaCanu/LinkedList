#include <stdio.h>
#include "linkedList.h"
#include <stdlib.h>

int main() {
    Node* p = inizialize();
    printList(p);

    append(p, 10);
    append(p, 15);

    printList(p);    

    printf("La lista ha %d elementi\n", getSize(p));

}