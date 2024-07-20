#include <stdio.h>
void value(int n);
int refernce(int* n);
int swaping (int *a, int *b);
// int swap (int a, int b);
int odd(int arr[], int n); 
// write a fncs to reverse a array 
// int reverse ( int arr[] , int n);
// int printArr ( int arr[], int n);

int main()
{

    // int age = 20;
    // int *ptr = &age;
    // int pAge = *ptr;
    // printf("printing address of age %p \n", ptr);
    // printf("printing address of ptr %p \n", *ptr);
    // printf("printing address of age %p \n", ptr);
    // printf("printing address of ptr %u \n", *ptr);  // return the value of *ptr
    // printf("printing the pAge %d\n ", pAge);

    // int *pointer ;  // ye toh location btta hai {*}
    // int x;
    // pointer = &x; // ye value a sign karta hai
    // *pointer = 1;

    // printf ("* %u \n", *pointer);
    // printf ("no * %p\n", pointer);
    // printf ("x= %d\n", x);

    // printf("x= %d\n", x); // jo value poinnter k traf se milegi isko
    // printf("printing pointers %d\n", pointer); // ise pointer  ke ander x ka address rhka hai
    // printf("address pointers %p\n", pointer); // iske {*} iske ander value hai poineter or x ki

    // *pointer +=9;
    //   printf("x= %d\n", x); // jo value poinnter k traf se milegi isko
    // printf("printing pointers %d\n", pointer); // ise pointer  ke ander x ka address rhka hai
    // printf("address pointers %p\n", pointer); // iske {*} iske ander value hai poineter or x ki

    // (*pointer) ++;
    //   printf("x= %d\n", x); // jo value poinnter k traf se milegi isko
    //   printf("x= %d\n", x); // jo value poinnter k traf se milegi isko
    // printf("printing pointers %d\n", pointer); // ise pointer  ke ander x ka address rhka hai
    // printf("address pointers %p\n", pointer); // iske {*} iske ander value hai poineter or x ki

    // pointers ka bhi pointers
    // int age = 10;
    // int *ptr = &age;
    // int **point = &ptr;
    // printf ("pointers ka bhi pointers %u\n", point);
    // printf ("pointers ka bhi pointers %u\n", **point);
    // printf (" pointers %p\n", ptr);
    // printf (" age location %u\n",age);
    // printf ("age = %u\n", age);
    // int x = 2;
    // value(x);
    // printf("value of x %d\n", x); // 2
    // refernce(&x);
    // printf("refernce of x %d\n", x); // 4


    // int a = 1 ; int b =2 ;
      // swaping(&a,&b);
    // printf (" a=%d & b = %d\n",a,b); 

    // int arr[]= {1,2,3,4,5,6,7,8,9};
    // reverse(arr,9);
    // printArr(arr,9); 
    int n; 
    printf("enter n :");
    scanf("%d",&n);

    int fib[n]; 
    fib[0]=0; 
    fib [1]=1; 
     for (int i = 2; i < n; i++)
     {
        fib [i] = fib[i-1] + fib [i-2]; // i = 8 == i-1 = 7  +  5-2 =   6 == 7+6 = 13 ; 
    printf("%d \t ", fib[i]);
     }
     

    return 0;
}
// int counting()
// int printArr ( int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//        printf("%d\t", arr[i]);

//     }
    
    
// }
// int reverse ( int arr[] , int n){
//     for (int i = 0; i < n/2; i++){
//         int firstVal = arr[i]; 
//         int secVal = arr[n - i - 1] ; 
//         arr[i] = secVal; 
//        arr[n- i - 1] = firstVal; 
//     }
    
// }
// int odd(int arr[], int n){
//     int count = 0 ; 
//     for (int  i = 0; i < n; i++)
//     {
//         if(arr[i] % 2 != 0){
//             count++;
//         }
//     }
//       return count; 
    
// }
int swaping (int *a, int *b){
    int temp = *a; 
    *a = *b;
    *b = temp; 
    // printf(" swaping numbers %d \n", *a, *b);
}
// int swap (int a, int b){
//     int temp = a; 
//     a = b;
//     b = temp;
//     printf(" swap numbers %d \n", a,b);
// }
void value(int n)
{
    n = n * n;
    printf(" value of n %d\n", n); // 4
}
int refernce(int* n)
{
    *n = (*n) * (*n);
    printf(" pointer N  %d \n", *n); // 4
}
