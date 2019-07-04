#include <stdio.h>

int main(){
    //2Dimension LinearList is row major order 즉, [0][0] [0][1] ... [1][0] [1][1] .. 이런 식
    int i, j, rec[2][4] = {{90,81,94,100},{100,88,95,92}};
    for(i = 0; i < 2; i++){
        printf("Result of %d : \n",i+1);
        for(j = 0; j < 4; j++){
            printf("Score : %d\n", rec[i][j]);
        }
    }
    return 0;
}