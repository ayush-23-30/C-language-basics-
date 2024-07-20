#include <stdio.h>

void square (int *n);

void swapping (int *a , int *b);
int doWork(int a , int b , int *sum,int *prod , int *avg);
int findmax(int *num1 , int *num2);

int main(){

//     int age = 22; 
//     int umarr = 22; 
//    int *ptr = &age;
//    int *point = &umarr;
//    printf("age %d\n", *ptr);
//    printf("age %d\n", *point);
//    printf("address of age %p\n", ptr);
//    printf("address of age %p\n", point);

    // int age = 20; 
    // char hel = "ayush"; 
    // // int *ptr = &age; 
    // // int Newage = *ptr; 

    // printf("%d\n", age); // age print karega 
    // printf("%p\n", &age); // ye address print karega 

    // printf(" char %c\t", &hel); // thorw error 

    // printf("%p\n", ptr); // ye location means address 
    // printf("%u\n", Newage); // ye data print karra hai 
    // printf("%p\n", &ptr); // ye apna address print karra hai 
    // printf("%p\n", Newage); // ye kuch galta hii show karra hai 

    // int *ptr; 
    // int  x; 
    // ptr = &x; 

    // printf("printing empty x by ptr %d\n", *ptr); // 0 
    // *ptr = 0; 
    // printf("printing x %d\t", *ptr);
    // *ptr +=5; 
    // printf("printing x after adding  %d\n", *ptr);

    // (*ptr)++; 
    // ++(*ptr); 
    // printf("after increasment %d\n", x);
    // printf("after increasment %u\n", &x);

//    int **point = &ptr; 
//    printf("printing Adress %p\n", ptr);
//    printf("printing Adress %p\n", point);
    // int no = 4; 
    // square(&no);

    // printf("no value after fncs %d",no);

    int x = 1; 
    int y = 2; 

    swapping(&x,&y);
    printf(" printing two number %d = x , %d = y \n", x,y);

    // int a = 10; 
    // int b = 20; 
    // int sum, prod, avg;

    // // doWork(a,b, &sum, &prod, &avg);
    // // printf("sum = %d , prod = %d , avg = %d \n", sum , prod, avg); 

    // int num1, num2; 
    // int *ptr1 , *ptr2; 

    // printf("enter number 1 : ");
    // scanf("%d",&num1);
    // printf("enter number 2 : ");
    // scanf("%d",&num2);

    // ptr1 = &num1;
    // ptr2 = &num2;

    // printf("%u\t", ptr1);
    // printf("%u\n", ptr2);

    // int max = findmax(ptr1, ptr2); 
    // printf("the maximum number between %d , %d and %d \n", *ptr1, *ptr2, max);
   
//    char alphabet [26]; 
//    char *ptr = alphabet; 

//    for (char letter = 'a'; letter <= 'z'; letter++)
//    {
//     *ptr  = letter; 
//     ptr++;
//    }

//    ptr = alphabet; 

//    for (int i = 0; i <26; i++){
//     printf("%c\n", *ptr); 
//     ptr++;
//    }
   




         

    return 0; 
}
int findmax(int *num1 , int *num2){
    if (*num1 > *num2)
    {
        return *num1;
    }
    else{
        return *num2; 
    }
    
}
int doWork(int a, int b,int *sum,int *prod , int *avg){
    *sum = a+b; 
    *prod = a*b;
    *avg = (a+b)/2; 

}
void Adress(int n){
    printf("%p\n", &n); 
}
void swapping (int *a , int *b){
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}
void square (int *n){
    *n = (*n) * (*n);
    printf("%d\n", *n);
}

// void square (int n){
//     int sq = n*n;
//     printf("%d\n", sq);
// }