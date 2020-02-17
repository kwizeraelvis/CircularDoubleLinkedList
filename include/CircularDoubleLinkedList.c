//
// Created by elvis on 2/17/20.
//

#include "CircularDoubleLinkedList.h"


HEAD *head = NULL;

void push(){
    NODE *new_node = (NODE*)malloc(sizeof(NODE));
    NODE *temp;
    printf("Enter data to push to the list\n");
    scanf("%d", &new_node->data);

    if(head == NULL){
        head = new_node;
        new_node->prev = head;
        new_node->next = head;
    }else{
        temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
    }
}

void display(){
    NODE *temp = head;
    do{
        printf("%d\t", temp->data);
        temp = temp->next;
    }while(temp != head);
}

void append(){
    NODE *new_node = (NODE*)malloc(sizeof(NODE));
    NODE *temp;
    printf("Enter data to append to the list\n");
    scanf("%d", &new_node->data);

    if(head == NULL){
        head = new_node;
        new_node->next = head;
        new_node->prev = head;
    }else{
        temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
        head->prev = new_node;
        new_node->next = head;
    }
}
void delete(){
    NODE *current = head, *prev;
    int dataTobeDeleted;
    printf("Enter the value to be delted form the list\n");
    scanf("%d", &dataTobeDeleted);

    if(head == NULL){
        return;
    }
    while(current->data != dataTobeDeleted){
        if(current->next == head){
            printf("\nThe List does not contain the element\n");
        }
        prev = current;
        current = current->next;
    }
    if(current->next == head && prev == NULL){
        head = NULL;
        free(current);
    }
    if(current == head){
        prev = head->prev;
        head = head->next;
        prev->next = head;
        head->prev = prev;
        free(current);
    } else if(current->next == head){
        prev->next = head;
        head->prev = prev;
        free(current);
    } else{
        NODE *temp = current->next;
        prev->next = temp;
        temp->prev = prev;
        free(current);
    }

}