#include <stdio.h>
#include <stdlib.h>

struct NODE //구조체 선언
{
    int data;
    struct NODE*link;
};

int main(){
    struct NODE *head = NULL;  //head 노드 선언

    struct NODE *node1 = (struct NODE*)calloc(1,sizeof(struct NODE));
    struct NODE *node2 = (struct NODE*)calloc(1,sizeof(struct NODE));
    struct NODE *node3 = (struct NODE*)calloc(1,sizeof(struct NODE)); //동적 할당 부분

    head = node1; //node1이 head노드임을 선언
    node1->data = 10;
    node1->link = node2;
    node2->data = 30;
    node2->link = node3;
    node3->data = 50;

    node3->link = head; //node1을 가리키게 함

    struct NODE *curr = head;
    do{
        printf("Data : %d\n",curr->data);
        curr = curr->link;
    }
    while(curr != head);
   

    free(head);
    free(node1);
    free(node2);
    free(node3);
    return 0;
}