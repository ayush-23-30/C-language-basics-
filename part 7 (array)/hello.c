#include <stdio.h>

void printNum (int arr[], int n );
int notEven (int arr [], int n );

int main(){
 
//  int num[3];
//  printf("enter marks of history : ");
//  scanf("%d", &num[0]);

//  printf("enter marks of political : ");
//  scanf("%d", &num[1]);
 
//  printf("enter marks of eco : ");
//  scanf("%d", &num[2]);

//  printf("his = %d & pol = %d & eco = %d\n", num[0], num[1], num[2]);
//  printf("total marks = %d\n",num[0]+ num[1]+ num[2]);

// write a program to enter price of 3 items & print their final cost with gst;
// finding GST = float + 18% 

// float price[3]; 

// printf("enter the cost of first element : ");
// scanf("%f",&price[0]);

// printf("enter the cost of  2nd lement : ");
// scanf("%f",&price[1]);

// printf("enter the cost of 3rd element : ");
// scanf("%f",&price[2]);

// printf("total cost + Gst = %f\n", price[0]+ (0.18*price[0]));
// printf("total cost + Gst = %f\n", price[1]+ (0.18*price[1]));
// printf("total cost + Gst = %f\n", price[2]+ (0.18*price[2]));

// int price [] = {2,34,46,57}; 
// printf("%d\n",price[7]);

// int age = 22; 
// int  *ptr = &age ;
// printf ("ptr = %u \n", ptr); 
// ptr ++; 
// printf("ptr = %u \n", ptr); 
// int  *ptr = &age ;



// float cost = 20.00; 
// float *ptr = &cost; 
// printf ("ptr = %u \n", ptr); 
// ptr ++; 
// printf("ptr = %u \n", ptr); 
// char star  ='*';
// char *ptr = &star; 
// printf ("ptr = %u \n", ptr); 
// ptr ++;
// printf("ptr = %u \n", ptr);

// int age = 20;
// int yp = 4;
// int Aage = 20;


// int *ptr = &age; 
// int *Aptr = &Aage; 

// printf("difference %d\n", ptr-Aptr); 
// Aptr = &age; 
// printf("comperison %d\n", ptr == Aptr); // 1 true 

// int adhar[6];

// int *ptr = adhar; 

// //input 

// for (int i = 0; i <6; i++)
// {
//   printf("%d index: ", i);  // ye i ko print bhi karta rhega kii loop kha chlra hai 
//   scanf("%d",&adhar[i] ); // or you can use (ptr+i)
// }
// //output 
// for (int i = 0; i < 6; i++)
// {
//   printf("index =  %d\n",i, adhar[i]); // ye i or adhar num print karega 
// // }
// int num [] = {2,4,6,8,10,12}; 
// printNum(num,6);

// 2 bachon k 3 subject ke marks 

// int marks[2][3] = {{57,54,68}, {23,42,34}}; // _ _ _ || _ _ _

// printf("marks of first student : %d\t", marks[0][0]);
// printf("marks of first student : %d\t", marks[0][1]);
// printf("marks of first student : %d\n", marks[0][2]);

// printf("marks of 2nd student : %d\t", marks[1][0]);
// printf("marks of 2nd student : %d\t", marks[1][1]);
// printf("marks of 2nd student : %d\n", marks[1][2]);

int num[] = {1,2,3,45,56,3214,6,34,42425,43};
printf(" number of odd number : %d ",notEven(num,10));




    return 0; 
}
int notEven(int arr[], int n ){
   int count = 0; 
   for (int i = 0; i < n; i++)
   {
    if(arr[i] %2 != 0){i
        count++; 
    }
   }
   return count;
   
}
void printNum (int arr[], int n ){
    for (int i = 0; i<n; i++)
    {
     printf("%d \t", arr[i]);
    }
    printf("\n");
}