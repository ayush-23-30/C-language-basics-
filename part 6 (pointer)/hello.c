#include <stdio.h>

void refer (int* n);
void sqaure (int n );
void swap (int a , int b );
void swapByrefe (int* a, int* b);
void printAdrress(int* n);
int doWrok (int a , int b , int *sum , int *prod , int *avg); 
// 
int main(){

// int age = 22; 
// int *ptr = &age;
// int localtionAge = *ptr;
// printf ("age variable %d\n",age);
// printf (" ptr variable %d\n",*ptr);
// printf("%p \n", localtionAge);
// printf("%u \n", localtionAge);
// printf(" this by using & %p \n", &age);
// printf(" this by using normal age  %p \n", age);
// printf(" this by using &ptr %p \n", &localtionAge);


// int *ptr; int x; 
// ptr  = &x; 
// *ptr = 0; 

// printf("x = %d\n",x); // 0
// printf("*ptr = %d\n",*ptr); //0

// *ptr +=5; 

// printf(" x after +5 = %d\n",x); //5
// printf("*ptr  after +5  = %d\n",*ptr);// 5

// (*ptr)++; 

// printf("x after ++ = %d\n",x);// 6
// printf("*ptr after ++ = %d\n",*ptr);//6

// float price = 100 ; 
// float *ptr = &price; 
// float **pptr = &ptr ;

// printf(" address of ptr %u\n", price);
// printf( " address of ptr %u\n", ptr);
// printf(" address of pptr %u\n", pptr);
// printf("%f\n", **pptr);// pointer to pointer

// int sq = 4; 
// printf("number = %d\n", sq);
// sqaure(sq);
// refer(&sq);
// printf("number = %d\n", sq);

// int x = 1 , y = 2; 
// swap (x,y); 
//    printf (" by using call by value x= %d & y = %d \n", x,y);
//     swapByrefe(&x,&y); 
//    printf (" by using call by refernce x= %d & y = %d \n", x, y);

// int n = 4; 
// printAdrress(&n);
// printf("%u\n", &n); //
int a = 3; 
int b = 5;
int sum , prod , avg ; 
doWork(a,b, &sum, &prod, &avg);
printf("sum -%d & prod - %d & avg- %d \n", sum , prod , avg);




return 0;
}
int doWork(int a , int b , int *sum,int *prod , int *avg){ // ye 3 hai reference  or 2 hai value 
*sum = a+b;
*prod = a*b; 
*avg = (a+b)/2;

}
void printAdrress(int* n){ // ye  call by value toh isilye address alg hoga dono ka agar pointer use hua hota toh fir address same hota  
    printf("%u\n", n);
}
// call by refernce 
void swapByrefe (int* a, int* b){
    int t = *a;
    *a = *b; 
    *b = t; 
    //   printf ("a= %d & b = %d \n", *a,*b);
}

// call by value 
void swap (int a , int b ){
    int t = a; 
    a = b; 
    b = t; 
    printf ("a= %d & b = %d \n", a,b);
}
void refer(int* n){
    *n =(*n)*(*n);
    printf("sqaure %d\n",*n);/// ye address le lega ab saari cheez address k saath hogi 

}
void sqaure (int n){
    n = n*n ;
    printf("sqaure %d\n",n);
}