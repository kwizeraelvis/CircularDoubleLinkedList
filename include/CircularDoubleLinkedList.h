//
// Created by elvis on 2/17/20.
//

#ifndef CIRCULARDOUBLELINKEDLIST_CIRCULARDOUBLELINKEDLIST_H
#define CIRCULARDOUBLELINKEDLIST_CIRCULARDOUBLELINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    int data;
    struct node *prev;
    struct node *next;
}NODE, HEAD;


void push();
void display();
void append();
void delete();


#endif //CIRCULARDOUBLELINKEDLIST_CIRCULARDOUBLELINKEDLIST_H
