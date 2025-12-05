#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *next;
};

typedef struct Node Node;


/*Funzione che stampa ogni elemento della lista andadno a capo*/

void printList(Node *p) {

    /*Controllo se la lista passata non è vuota*/

    if (p == NULL) {
        printf("Lista vuota, non ci sono nodi");
    } else {

        /* Attraverso un nodo temporaneo "scan" scorro tutti
         i nodi stampando la variabile info di ogni nodo*/
        
        Node *scan = p;
        do {

            printf("%d\n", scan->info);
            scan = scan->next;

        } while (scan != NULL); /*Mi stoppo quando il nodo scan corrente è nullo, 
                                cioé è arrivato alla fine della lista*/
        
    }
    
}

int getSize(Node *p) {
    if (p == NULL) {
        return 0;
    } else {
        int size = 1;
        Node *scan = p;
        do
        {
            scan = scan->next;
            size++;
        } while (scan->next != NULL);
        return size;
        
    }
    
}



int main() {
    Node *p = (Node*) malloc(sizeof(Node));
    p->info= 0;

    Node *p2 = (Node*) malloc(sizeof(Node));
    p2->info = 10;

    p->next= p2;

    printList(p);

    printf("La lista ha %d elementi\n", getSize(p));

}