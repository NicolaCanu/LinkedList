#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    int info;
    struct Node *next;
};

typedef struct Node Node;

Node* inizialize();

void printList(Node *p);

int getSize(Node *p);

void append(Node *head, int val);

void pop(Node *p);

void addHead(Node *p, int val);

#endif