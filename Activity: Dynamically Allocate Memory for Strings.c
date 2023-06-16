// my solution
#include <stdio.h>
#include <stdlib.h>

char* allocateString(int);

int main(void) {
    int lengthLight, lengthDark;
    char *strLight, *strDark;
    
    scanf("%d %d", &lengthLight, &lengthDark); 
    strLight = allocateString(lengthLight); 
    
    /* The goal is to reserve space for the light setting label, therefore you 
       need to pass the number lengthLight to the function allocateString()
       Store the return value of this function call in the variable strLight. */
     
    strDark = allocateString(lengthDark);
  
    /* This time the goal is to reserve space in memory for the dark setting label.
       Store the return value of the function call in the variable strDark. */
   
    scanf("%s", strLight);
    scanf("%s", strDark);
    printf("Local settings: %s - %s\n", strLight, strDark);
    // Write a line of code here to free the memory allocated for strLight
    free(strLight);
    // Write a line of code here to free the memory allocated for strDark
    free(strDark);
	
    return 0;
}

char* allocateString(int numChars) {
    char* ptr = (char*) malloc(numChars * sizeof(char));
    return ptr;
}
