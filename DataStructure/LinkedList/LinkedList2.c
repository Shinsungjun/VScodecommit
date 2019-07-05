#include <stdio.h>
#include <stdlib.h>

struct NODE //구조체 선언
{
    int data;
    struct NODE*link;
};

int main(){
    struct NODE *head = (struct NODE*)calloc(1,sizeof(struct NODE));
    struct NODE *node1 = (struct NODE*)calloc(1,sizeof(struct NODE));
    struct NODE *node2 = (struct NODE*)calloc(1,sizeof(struct NODE));
    struct NODE *node3 = (struct NODE*)calloc(1,sizeof(struct NODE)); //동적 할당 부분

    head->link = node1;
    node1->data = 10;
    node1->link = node2;
    node2->data = 30;
    node2->link = node3;
    node3->data = 50;
    node3->link = NULL;

    struct NODE *curr = head->link;
    while(curr != NULL){          //삽입 전
        printf("Data : %d\n",curr->data);
        curr = curr->link;
    }
    printf("\n\n");  
    //삽입 과정
    struct NODE *NEW = (struct NODE*)calloc(1,sizeof(struct NODE));
    NEW->data = 40;
    NEW->link = node2->link;
    node2->link = NEW;

    curr = head->link;
    while(curr != NULL){          //삽입 후
        printf("Data : %d\n",curr->data);
        curr = curr->link;
    }

    free(head);
    free(node1);
    free(node2);
    free(node3);
    free(NEW);
    return 0;
}