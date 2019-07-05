#include <stdio.h>
#include <stdlib.h>

struct NODE //구조체 선언
{
    char *data;
    struct NODE*link;
};

int main(){
    struct NODE *week = (struct NODE*)calloc(1,sizeof(struct NODE));
    struct NODE *node1 = (struct NODE*)calloc(1,sizeof(struct NODE));
    struct NODE *node2 = (struct NODE*)calloc(1,sizeof(struct NODE));
    struct NODE *node3 = (struct NODE*)calloc(1,sizeof(struct NODE)); //동적 할당 부분

    week->link = node1;
    node1->data = "MON";
    node1->link = node2;
    node2->data = "TUE";
    node2->link = node3;
    node3->data = "WED";
    node3->link = NULL;

    struct NODE *curr = week->link;
    while(curr != NULL){
        printf("Today is %s\n",curr->data);
        curr = curr->link;
    }
    free(week);
    free(node1);
    free(node2);
    free(node3);
    return 0;
}