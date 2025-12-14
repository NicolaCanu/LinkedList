#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"



Node* inizialize() {
    Node *t = (Node*) malloc(sizeof(Node));
    return t;
}

/*Funzione che stampa ogni elemento della lista andadno a capo*/

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


void pop(Node *p) {
    if (p == NULL) {

        printf("La lista è vuota\n");

    } else {

        Node *scan =  p;
        for (int i = 0; i < getSize(p)-1; i++) {
            scan = scan->next;
        }
        scan->next = NULL;
        
    }
}


void addHead(Node *p, int val) {
    Node *newNode = (Node*) malloc(sizeof(Node));
    newNode->info = val;

    if (p->next == NULL) {
        p = newNode;
    } else {
        Node *temp = (Node*) malloc(sizeof(Node));
        temp = p->next;
        p->next = newNode;
        newNode->next = temp;
    }
}

Node* getNod(Node* p, int pos) {
    if (p->next != NULL) {
        int cnt = 1;
        Node* scan = p->next;
        while (cnt < pos) {
            scan = scan->next;
        }
        return scan;
        
    }
    
}