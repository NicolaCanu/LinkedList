#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"


/*Funzione che stampa ogni elemento della lista andadno a capo*/

Node* inizialize() {
    Node *t = (Node*) malloc(sizeof(Node));
    return t;
}

void printList(Node *p)
{

    /*Controllo se la lista passata non è vuota*/

    if (p->next == NULL) {
        printf("Lista vuota, non ci sono nodi\n");
    } else {

        /* Attraverso un nodo temporaneo "scan" scorro tutti
         i nodi stampando la variabile info di ogni nodo*/
        
        Node *scan = p->next;
        do {

            printf("%d\n", scan->info);
            scan = scan->next;

        } while (scan != NULL); /*Mi stoppo quando il nodo scan corrente è nullo, 
                                cioé è arrivato alla fine della lista*/
        
    }
}

int getSize(Node *p) {
    if (p->next == NULL) {
        return 0;
    } else {
        int size = 1;
        Node *scan = p->next;
        do
        {
            scan = scan->next;
            size++;
        } while (scan->next != NULL);
        return size;
        
    }
    
}


void append(Node *head, int val) {
    Node *newNode = (Node*) malloc(sizeof(Node));
    newNode->info = val;
    newNode->next = NULL;
    
    if (head->next == NULL) {
        head->next = newNode;
    } else {
        Node *scan = head->next;
        while (scan->next != NULL) {
            scan = scan->next;
        }
        scan->next = newNode;
        
    }
}