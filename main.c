#include <stdio.h>
#include "linkedList.h"
#include <stdlib.h>

int main() {
    Node* p = inizialize();
    printList(p);

    append(p, 10);
    append(p, 15);
    append(p, 30);

    printList(p);    
    printf("La lista ha %d elementi\n", getSize(p));

    pop(p);

    printList(p);    
    printf("La lista ha %d elementi\n", getSize(p));

    addHead(p, 20);

    printList(p);    
    printf("La lista ha %d elementi\n", getSize(p));

}