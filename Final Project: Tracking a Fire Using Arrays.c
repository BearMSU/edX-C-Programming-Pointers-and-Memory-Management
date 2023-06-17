// My Solution
// Final Project: tracking a fire using arrays

#include <stdio.h>
#include <stdlib.h>

int **allocateIntStarArray(int);
int *allocateIntArray(int);
void freeIntStarArray(int**, int);
void printFireZones(int**, int, int);

int main() {
  int length, width;
  scanf("%d %d", &length, &width);

  int **temperatures = allocateIntStarArray(width);
  for (int i = 0; i < width; i++) {
    temperatures[i] = allocateIntArray(length);
    for (int j = 0; j < length; j++) {
      scanf("%d", &temperatures[i][j]);
    }
  }

  printFireZones(temperatures, width, length);

  freeIntStarArray(temperatures, length);

  return 0;
}

int **allocateIntStarArray(int num) {
  int **ptr = (int **)malloc(num * sizeof(int *));
  for (int i = 0; i < num; i++) {
    ptr[i] = (int *)malloc(sizeof(int));
  }
  return ptr;
}

int *allocateIntArray(int num) {
  int *ptr = (int *)malloc(num * sizeof(int));
  return ptr;
}

// function to free the memory allocated by the allocateIntStarArray function
void freeIntStarArray(int **ptr, int num) {
  for (int i = 0; i < num; i++) {
    free(ptr[i]);
  }
  free(ptr);
}

// function to print a grid to represent the fire zone.
void printFireZones(int **temperatures, int width, int length) {
  for (int i = 0; i < width; i++) {
    for (int j = 0; j < length; j++) {
      if (temperatures[i][j] > 1000) {
        printf("[X]");
      } else if (temperatures[i][j] >= 100) {
        printf("[*]");
      } else {
        printf("[ ]");
      }
    }
    printf("\n");
  }
}
