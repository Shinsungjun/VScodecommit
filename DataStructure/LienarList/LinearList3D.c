#include <stdio.h>

int main(){
    int i, j, k, rec[2][2][4] = {{{90,99,100,95},{99,85,88,100}},
                                {{100,88,99,77},{99,88,66,98}}};
    for (i = 0; i < 2; i++){
        if(i == 1){
            printf("\n\n");
        }
        printf("Class Number : %d\n",i+1);
        for(j = 0; j < 2; j++){
            printf("%dth Student : \n",j+1);
            for(k=0; k <4; k++){
                printf("Score : %d\n",rec[i][j][k]);
            }//k for문
        }//j for문
    }//i for문
    return 0;
}