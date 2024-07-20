#include <stdio.h>
#include <stdlib.h>


int main(){

// printf("size of int %d\n", sizeof (int));
// printf("size of float %d\n", sizeof (float));
// printf("size of char %d\n", sizeof (char));

// int *ptr;
// ptr = (int*) malloc (5*sizeof (int)); 
// // ptr[0] = 1; 
// ptr[1] = 2; 
// ptr[2] = 3; 
// ptr[3] = 4; 
// ptr[4] = 5; 

// for (int i = 0; i <6; i++)
// {
//     printf("ptr array %d\n", ptr[i]); 
// }

// int *point; 
// point = (int*) calloc (5,sizeof(int));
// point [0] = 4;
// point [1] = 6;
// point [2] = 8;
// point [3] = 10;
// point [4] = 12;


// point = realloc(point,8*sizeof(int)); 

// for (int i = 0; i <10; i++)
// {
//     printf("point array %d\n", point[i]); 
// }

int *point; 
point = (int*) calloc(5, sizeof(int));
point[0] = 4;
point[1] = 6;
point[2] = 8;
point[3] = 10;
point[4] = 12;

point = realloc(point, 8 * sizeof(int)); // Reallocate to a larger size (8 integers)

if (point != NULL) {
    for (int i = 0; i < 8; i++)
    {
        printf("point array %d\n", point[i]); 
    }
} else {
    printf("Memory reallocation failed.\n");
};

int *ptr;
ptr = (int*) malloc(5 * sizeof(int));

if (ptr != NULL) {
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    for (int i = 0; i < 5; i++) {
        printf("ptr array %d\n", ptr[i]);
    }

    free(ptr); // Don't forget to free the allocated memory when done.
} else {
    printf("Memory allocation failed.\n");
}








    return 0; 
}