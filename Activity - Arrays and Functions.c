// Activity: passing array to function to find score

#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

void behind(int *a, int n){
    int i;
    
    // initialize max location
    int max = a[0];
    
    // find max value
    for (i=0; i<n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    
    // update scores of each players that differs with maximum player
    for (i=0; i<n; i++){
        a[i] = max - a[i];
    }
}
