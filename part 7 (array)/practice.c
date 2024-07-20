#include <stdio.h>

void array (int arr[],int n);

int main(){


// int mark[] = {};

// printf("enter 0 index number");
// scanf ("%d", &mark[0]); 
// printf("%d\n", mark[0]);

// printf("enter 1 index number");
// scanf ("%d", &mark[1]); 
// printf("%d\n", mark[1]); 

// printf("enter 2 index number");
// scanf ("%d", &mark[2]); 
// printf("%d\n", mark[2]); 

// int marks[]= {1,2,3,4,5,6,7,8,9}; 
// for (int i = 0; i<10; i++)
// {
//     printf("%d\t", marks[i]); 
    
// }
// array(marks,9);


// int age = 20; 
// int *ptr = &age; 
// printf("%u\n", ptr); 

// ptr++;
// printf("%u\n", ptr); 

// char naam = 'ayush'; 
// char *ayu = &naam;
// printf("%u\n", ayu); 

// *ayu++; 
// printf("%u\n", ayu);

// int age  = 10; 
// int newage = 10; 

// int *ptr = &age;
// int *Newptr = &newage; 

// printf ("subtracting pointers %d\t", ptr - ptr); 
// printf ("equal or not  pointers %d\n", ptr == Newptr);



//  int adhar[6];

//  int *ptr = adhar; 

// //input 

// for (int i = 0; i <6; i++)
// {
//    printf("%d index: ", i);  // ye i ko print bhi karta rhega kii loop kha chlra hai 
//    scanf("%d",&adhar[i]); // or you can use (ptr+i)
// }
// // // output 
//  for (int i = 0; i < 6; i++)
//  {
//    printf("index =  %d\n",i,adhar[i]); // ye i or adhar num print karega 
// }








    return 0; 
}
void array (int arr[],int n){

    for(int i = 0; i< n ; i++){
        printf("%d\t", arr[i]); 
    }
    printf("\n"); 
}