#include <stdio.h>
#include <stdlib.h>
#include "include/CircularDoubleLinkedList.h"

main() {
    int choice;
    do {
        printf("\nEnter your choice\n");
        printf("\n1.Push\n2.Display\n3.Append\n4.Delete\n0.Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 0:
                printf("\nExecution Ended");
                break;
            case 1:
                push();
                break;
            case 2:
                display();
                break;
            case 3:
                append();
                break;
            case 4:
                delete();
                break;
            default:
                printf("\n Wrong Option");
                break;
        }
    } while (choice != NULL);
}