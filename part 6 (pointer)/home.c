#include <stdio.h>

void swap (int *a, int *b){
int t = *a; // a ki value t  m
int *a = b;
int *b = t; 
}


int main (){
// int age = 22; 
// int *ptr = &age;
// printf("%p\n",ptr);
// printf("%u\n",ptr);
// printf("%d\n",ptr);
// ptr++; 
// printf(" after ++ : %u\n",ptr);
// printf("this is pointed value : %d\n",*ptr);

int *ptr ; 
int x; 
ptr = &x;
*ptr = 0; 

printf("after exchange %d\n", *ptr); //  0
*ptr +=5; 
printf("after adding 5  %d\n", *ptr); // 5
(*ptr)++;  
printf("after plus plus %d\n", *ptr); //6
printf("after  plus %d\n", *ptr); //6

int a= 1;
int b = 2; 

swap(&a,&b);
printf("x= %d y = %d\n", a);
printf("x= %d y = %d\n", b);


  return 0;
}