// Course Final Solution
// Final Project: tracking a fire using arrays

#include <stdio.h>
#include <stdlib.h>

int ** allocateIntStarArray(int num){
	int ** ptr = (int **) malloc(num * sizeof(int *));
	return ptr;
}

int * allocateIntArray(int num){
	int * ptr = (int *) malloc(num * sizeof(int));
	return ptr;
}

int main(void)
{
    int line, col,i,j;
    scanf("%d",&col);
    scanf("%d",&line);
    int ** matrix = allocateIntStarArray(line);
    for(i = 0; i < line; i++){
     matrix[i] = allocateIntArray(col);
    }


    for(i = 0; i < line; i++){
        for(j = 0; j < col; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

     for(i = 0; i < line; i++){
        for(j = 0; j < col; j++){
            if(matrix[i][j]>1000){
                printf("[X]");
            }else{
                if(matrix[i][j]>=100){
                printf("[*]");
                }else{
                printf("[ ]");
                }
            }
           
        }
        printf("\n");
    }
   

    return 0;
}
